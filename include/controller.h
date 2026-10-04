#ifndef HVAC_H
#define HVAC_H

class HVACController
{
private:
    bool hvacOn;

public:
    HVACController();
    void setStatus(bool status);
    bool isOn() const;
};

#endif
