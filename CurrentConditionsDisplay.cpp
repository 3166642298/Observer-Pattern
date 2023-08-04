#include "CurrentConditionsDisplay.h"

void CurrentConditionDisplay::update(double temp, double humidity, double pressure)
{
	this->temperature = temp;
	this->humidity = humidity;
	this->display();
}

void CurrentConditionDisplay::display()
{
	cout << "Current conditions: "<<this->temperature<<"F degrees and "<<this->humidity <<"% humidity" << endl;
}
