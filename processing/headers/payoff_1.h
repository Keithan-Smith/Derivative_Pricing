#pragma once
#ifndef payoff_h
#define payoff_h

/// <summary>
/// The Purpose of ths class is to encapsulate the notion of the pay off of a vanilla option
/// We use enum to distinguish among different types of pay offs
/// The main method of this class take a value for Spot and returns the payoff 
/// </summary>

class PayOff {
public:
	enum OptionType {call, put};
	PayOff(double Strike_, OptionType TheOptionsType_);
	double operator()(double Spot) const;

private:
	double Strike;
	OptionType TheOptionsType; 
};
#endif
