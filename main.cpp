#include<iostream>
#include"WeatherData.h"
#include"CurrentConditionsDisplay.h"
#include"Observer.h"
using namespace std;
int main()
{
	WeatherData weatherData;
	CurrentConditionDisplay currentConditionsDisplay(&weatherData, "1");
	weatherData.setMeasurementsChanged(100, 12000, 23);
	return 0;
}