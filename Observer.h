#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H
#include<iostream>
using namespace std;
class Observer {
public:
	string name;

	virtual void update(double temp, double humidity, double pressure);
	
	bool operator==(const Observer o);
};
#endif // !OBSERVER_H
