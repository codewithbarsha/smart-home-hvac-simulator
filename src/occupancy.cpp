#include "occupancy.h"

OccupancySensor::OccupancySensor()
{
    occupants = 0;
}

void OccupancySensor::setOccupancy(int count)
{
    occupants = count;
}

int OccupancySensor::getOccupancy() const
{
    return occupants;
}
