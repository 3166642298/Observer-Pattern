#include "WeatherData.h"

void WeatherData::setMeasurementsChanged(double temperature, double humidity, double pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	this->measurementsChanged();
}

void WeatherData::measurementsChanged()
{
	this->notifyObserver();
}

void WeatherData::notifyObserver()
{
	for (Observer* observer : observers)
	{
		(*observer).update(temperature, humidity, pressure);
	}
}


void WeatherData::removeObserver(Observer* o)
{
	int n = 0;
	for (Observer* observer : observers)
	{
		if (observer == o)
		{
			this->observers.erase(this->observers.begin() + n);
		}
		n++;
	}
}

void WeatherData::registerObserver(Observer* o)
{
	observers.push_back(o);
}
