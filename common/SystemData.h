#ifndef SYSTEM_DATA_H
#define SYSTEM_DATA_H
using namespace std;

#include <string>

struct SystemData {
    string clientId;
    string hostname;
    string kernelVersion;

    double cpuUsage;
    double memoryUsage;
    double diskUsage;

    int processCount;

    double uptimeSeconds;

    long long timestamp;
};

#endif
