#ifndef OCCUPANCY_H
#define OCCUPANCY_H

class OccupancySensor
{
private:
    int occupants;

public:
    OccupancySensor();
    void setOccupancy(int count);
    int getOccupancy() const;
};

#endif
