#pragma once
#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include"Observer.h"
#include"Subject.h"
#include<vector>
#include<iostream>
using namespace std;
class WeatherData:public Subject {
private:
	double temperature;
	double humidity;
	double pressure;
	
public:
	vector<Observer*> observers;

	void setMeasurementsChanged(double temperature,double humidity,double pressure);//当有新的数值传入时

	void measurementsChanged();//得到更新的测量值，通知observer

	void notifyObserver()override;

	void removeObserver(Observer* o) override;
	
	void registerObserver(Observer* o)override;
};
#endif // !WEATHERDATA_H
