#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class UndergroundSystem
{
    unordered_map<int, pair<string, int>> checkInM;
    unordered_map<string, pair<int, int>> path;

public:
    UndergroundSystem()
    {
    }

    void checkIn(int id, string stationName, int t)
    {
        checkInM[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t)
    {
        auto checkIn = checkInM[id];
        checkInM.erase(id);

        string pathName = checkIn.first + "_" + stationName;
        path[pathName].first = t - checkIn.second;
        path[pathName].second += 1;
    }

    double getAverageTime(string startStation, string endStation)
    {
        string pathway = startStation + "_" + endStation;
        auto &route = path[pathway];
        return (double) route.first / route.second;
    }
};

int main()
{

    return 0;
}