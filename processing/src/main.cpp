# include <iostream>
# include <cmath>
# include <random_1.h>
# include <monte_carlo_simulation.cpp>

/*
	Monte Carlo Simulation for Option Pricing

	This C++ program demonstrates a Monte Carlo simulation to estimate the price of a European option
	using the geometric Brownian motion model. The program prompts the user to input the option parameters,
	including the option's expiry time, strike price, current spot price of the underlying asset,
	volatility, risk-free rate, and the number of simulation paths to run.

	The Monte Carlo simulation generates random future prices of the underlying asset, based on the
	assumption of geometric Brownian motion, and calculates the option's payoff at the expiration date.
	The estimated option price is the mean of the discounted payoffs.

	The program includes the necessary header files and function declarations from 'Random_1.h' and
	'Random1.cpp' for random number generation.

	Note: The provided code assumes that the header files and implementation files are available in
	the same directory as this main program.

	Usage:
	- Input the option parameters when prompted.
	- The program will calculate the option price using Monte Carlo simulation and display the result.

	Author: Keithan Smith
	Date: 26.07.2023
*/

int main()
{
	double Expiry;
	double Strike;
	double Spot;
	double Volatility;
	double riskFreeRate;
	unsigned long NumberOfPaths;

	cout << "\nEnter expiry\n";
	cin >> Expiry;

	cout << "\nEnter Strike\n";
	cin >> Strike;

	cout << "\nEnter Spot\n";
	cin >> Spot;

	cout << "\nEnter Volatility\n";
	cin >> Volatility;

	cout << "\nEnter Risk Free Rate\n";
	cin >> riskFreeRate;

	cout << "\nEnter number of paths\n";
	cin >> NumberOfPaths;

	double result = SimpleMonteCarlo(Expiry,
		Strike,
		Spot,
		Volatility,
		riskFreeRate,
		NumberOfPaths);

	cout << "\nThe price is " << result << "." << "\n";

	cout << "I made this change after a successful clone! << endl;

	double tmp;
	cin >> tmp;

	return 0;

}
