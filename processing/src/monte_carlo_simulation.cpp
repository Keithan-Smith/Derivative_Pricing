/* This is the Preprocessing */

// Requires the implementation of functions from Random1.cpp for random number generation.

#include <iostream>     // Library for input/output operations.
#include <cmath>        // Library for basic mathematical functions.
#include <Random_1.h>   // Points to our header file, Random_1.h, which exists in the same directory.
using namespace std;    // Using the standard namespace for easier access to standard library elements.

// Below we make the declaration for our function SimpleMonteCarlo.
// This function performs a simple Monte Carlo simulation for option pricing.

double SimpleMonteCarlo(double Expiry,        // Time to the expiration date of the option.
	double Strike,              // Strike price of the option.
	double Spot,                // Current spot price of the underlying asset.
	double Volatility,          // Volatility (standard deviation of returns) of the underlying asset.
	double riskFreeRate,        // Risk-free interest rate. 
	unsigned long NumberOfPaths) // Number of paths (iterations) to perform the Monte Carlo simulation.

	// Below is the implementation of our methodology 
{
	// Calculate the variance of the underlying asset's returns.
	double variance = pow(Volatility, 2);

	// Calculate the square root of the variance, used in the calculations.
	double RootVariance = sqrt(variance);

	// Calculate the Ito correction, which is used to correct the drift term in the geometric Brownian motion model.
	double itoCorrection = -0.5 * variance * Expiry;

	// Calculate the future spot price of the underlying asset at the expiration date,
	// taking into account the risk-free rate and the Ito correction.
	double movedSpot = Spot * exp(riskFreeRate * Expiry + itoCorrection);

	double thisSpot; // Initialize the spot value for the current time.
	double runningSum = 0; // Initialize the running sum of the option payoffs.

	// Perform the Monte Carlo simulation by iterating over the specified number of paths.
	for (unsigned long i = 0; i < NumberOfPaths; i++)
	{
		// Generate a random number from a standard normal distribution.
		double thisGaussian = GetOneGaussianbyBoxMuller();

		// Calculate the future spot price using the geometric Brownian motion model.
		thisSpot = movedSpot * exp(RootVariance * sqrt(Expiry) * thisGaussian);

		// Calculate the option payoff at the expiration date.
		double thisPayoff = thisSpot - Strike;

		// The option payoff cannot be negative, so it is truncated at 0 using the ternary operator.
		thisPayoff = thisPayoff > 0 ? thisPayoff : 0;

		// Add the option payoff to the running sum.
		runningSum += thisPayoff;
	}

	// Calculate the mean of all the option payoffs.
	double mean = runningSum / NumberOfPaths;

	// Discount the mean payoff to the present value using the risk-free rate and expiration time.
	mean *= exp(-riskFreeRate * Expiry);

	// Return the estimated option price.
	return mean;
}
