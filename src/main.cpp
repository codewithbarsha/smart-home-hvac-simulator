#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double temperature, targetTemperature;
    int occupancy;

    cout << "====================================\n";
    cout << "     SMART HOME HVAC SIMULATOR\n";
    cout << "====================================\n";

    cout << "Enter room temperature (C): ";
    cin >> temperature;

    cout << "Enter occupancy count: ";
    cin >> occupancy;

    cout << "Enter target temperature (C): ";
    cin >> targetTemperature;

    bool hvacOn = false;

    if (occupancy > 0 && temperature > targetTemperature)
        hvacOn = true;

    cout << "\n----------- SYSTEM STATUS -----------\n";
    cout << fixed << setprecision(1);
    cout << "Room Temperature : " << temperature << " C\n";
    cout << "Occupancy         : " << occupancy << "\n";
    cout << "Target Temperature: " << targetTemperature << " C\n";
    cout << "HVAC Status       : "
         << (hvacOn ? "ON" : "OFF") << "\n";
    cout << "-------------------------------------\n";

    return 0;
}
