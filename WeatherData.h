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

	void setMeasurementsChanged(double temperature,double humidity,double pressure);//�����µ���ֵ����ʱ

	void measurementsChanged();//�õ����µĲ���ֵ��֪ͨobserver

	void notifyObserver()override;

	void removeObserver(Observer* o) override;
	
	void registerObserver(Observer* o)override;
};
#endif // !WEATHERDATA_H
