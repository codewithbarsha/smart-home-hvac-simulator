#include "sensor.h"

TemperatureSensor::TemperatureSensor()
{
    temperature = 25.0;
}

void TemperatureSensor::setTemperature(double value)
{
    temperature = value;
}

double TemperatureSensor::getTemperature() const
{
    return temperature;
}
