#include <iostream>
#include <string>

class HVACDriver {
public:
    void setPower(bool on) {
        status = on;
        std::cout << "[DRIVER] HVAC power: "
                  << (status ? "ON" : "OFF") << std::endl;
    }

    bool getPower() const {
        return status;
    }

private:
    bool status = false;
};

int main() {
    HVACDriver driver;

    driver.setPower(true);
    std::cout << "[DRIVER] Current status: "
              << (driver.getPower() ? "ON" : "OFF") << std::endl;

    driver.setPower(false);
    std::cout << "[DRIVER] Current status: "
              << (driver.getPower() ? "ON" : "OFF") << std::endl;

    return 0;
}
