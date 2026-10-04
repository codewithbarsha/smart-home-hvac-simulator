#ifndef SENSOR_H
#define SENSOR_H

class TemperatureSensor
{
private:
    double temperature;

public:
    TemperatureSensor();
    void setTemperature(double value);
    double getTemperature() const;
};

#endif
