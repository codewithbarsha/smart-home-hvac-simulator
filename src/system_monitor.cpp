#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void showSystemInfo()
{
    ifstream cpuInfo("/proc/cpuinfo");
    ifstream memInfo("/proc/meminfo");

    cout << "\n===== LINUX SYSTEM MONITOR =====\n";

    if (cpuInfo)
    {
        string line;
        while (getline(cpuInfo, line))
        {
            if (line.find("model name") != string::npos)
            {
                cout << "CPU: " << line << "\n";
                break;
            }
        }
    }
    else
    {
        cout << "CPU information unavailable\n";
    }

    if (memInfo)
    {
        string line;
        while (getline(memInfo, line))
        {
            if (line.find("MemTotal") != string::npos)
            {
                cout << "Memory: " << line << "\n";
                break;
            }
        }
    }
    else
    {
        cout << "Memory information unavailable\n";
    }

    cout << "Linux system interface: ACTIVE\n";
    cout << "===============================\n";
}

