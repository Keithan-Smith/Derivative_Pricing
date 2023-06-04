
# include <monte_carlo_simulation.cpp>



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

	cout << "\nThe price is " << result << "\n";

	double tmp;
	cin >> tmp;

	return 0;

}