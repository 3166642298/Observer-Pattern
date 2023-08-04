#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H
#include"Observer.h"
class Subject {
public:
	virtual void registerObserver(Observer* o);
	virtual void removeObserver(Observer* o);
	virtual void notifyObserver();
};
#endif