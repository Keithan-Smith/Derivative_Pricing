#pragma once


#ifndef RANDOM1_H
#define RANDOM1_H

// Before we start the simulation, we need a way to generate random numbers. 
// Random numbers are essential for simulating uncertain events in financial markets.

double GetOneGaussianbySummation();
double GetOneGaussianbyBoxMuller();

#endif // !RANDOM1_H