#include <Random_1.h>
#include <cstdlib>
#include <cmath>


// Generate random numbers from a standard normal distribution using the summation method.

double  GetOneGaussianbySummation()
{
	double sum = 0; 
	for (unsigned long j = 0; j < 12; j++) // Sum 12 uniformly distributed random numbers between -0.5 and 0.5.
		sum += static_cast<double>(rand()) / RAND_MAX - 0.5; // Random number between -0.5 and 0.5

	return sum / sqrt(12.0); // Normalize by dividing by the square root of 12
}


// Generate a random number from a standard normal distribution using the Box-Muller transform method.
// Returns a double value representing the random number.
double GetOneGaussianbyBoxMuller()
{
    double result;          // Variable to store the final random number
    double x;               // First random number (between -1 and 1)
    double y;               // Second random number (between -1 and 1)
    double sizeSquared;     // Squared magnitude of the (x, y) vector

    // Generate random (x, y) points until they fall inside the unit circle (radius = 1).
    do {
        // Generate two random numbers (x and y) between -1 and 1 using rand() function.
        x = 2.0 * rand() / static_cast<double>(RAND_MAX) - 1;
        y = 2.0 * rand() / static_cast<double>(RAND_MAX) - 1;

        // Calculate the squared magnitude of the (x, y) vector.
        sizeSquared = x * x + y * y;

        // If the (x, y) point falls outside the unit circle, repeat the generation process.
    } while (sizeSquared >= 1.0);

    // Perform the Box-Muller transform to obtain a random number from a standard normal distribution.
    // This transformation uses the polar form of the Box-Muller method.
    // The transformation ensures that the generated random numbers have a mean of 0 and a standard deviation of 1.
    result = x * sqrt(-2 * log(sizeSquared) / sizeSquared);

    // Return the random number from a standard normal distribution.
    return result;
}
