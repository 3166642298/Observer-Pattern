#include "Observer.h"

void Observer::update(double temp, double humidity, double pressure)
{

}

bool Observer::operator==(const Observer o)
{
	if (this->name == o.name)
	{
		return true;
	}
	else {
		return false;
	}
}
