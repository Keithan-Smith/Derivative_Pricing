#include <Random_1.h>
#include <cstdlib>
#include <cmath>


double  GetOneGaussianbySummation()
{
	double sum = 0;
	for (unsigned long j = 0; j < 12; j++)
		sum += static_cast<double>(rand()) / RAND_MAX - 0.5; // Random number between -0.5 and 0.5

	return sum / sqrt(12.0); // Normalize by dividing by the square root of 12
}

double GetOneGaussianbyBoxMuller()
{
	double result;
	double x;
	double y;
	double sizeSquared;

	do {
		x = 2.0 * rand() / static_cast<double>(RAND_MAX) - 1;
		y = 2.0 * rand() / static_cast<double>(RAND_MAX) - 1;
		sizeSquared = x * x + y * y;
	} while
		(sizeSquared >= 1.0);

	result = x * sqrt(-2 * log(sizeSquared) / sizeSquared);

	return result;
}