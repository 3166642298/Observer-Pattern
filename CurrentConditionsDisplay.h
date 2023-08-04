#pragma once
#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H
#include"Observer.h"
#include"WeatherData.h"
class CurrentConditionDisplay :public Observer {
private:
	double temperature;
	double humidity;
	WeatherData* weatherData;
public:
	CurrentConditionDisplay() = default;

	CurrentConditionDisplay(WeatherData* weatherData,string name){
		this->weatherData = weatherData;
		this->weatherData->registerObserver(this);
		this->name = name;
	}
    
	void update(double temp, double humidity, double pressure) override;

	void display();
};
#endif // !CURRENTCONDITIONSDISPLAY_H
