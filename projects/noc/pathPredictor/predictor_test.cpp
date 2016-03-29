#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

long latitude, longitude;
map<long, long> locationSet;

void getCurrentLocations();
void storeLocationSets(long, long);
void lookupPreviousLocations();
void predictLocation();

int main(int argc, char *argv[])
{

}

void getCurrentLocations()
{
    cout << "\nLatitude = ";    cin >> latitude;
    cout << "\bLongitude = ";   cin >> longitude;

    storeLocationSets(latitude, longitude);

}

void storeLocationSets(long l1, long l2)
{
     locationSet.push(pair(l1, l2));
}

void lookupPreviousLocations()
{
     int lookupDepth = 0;
     vector<int> previousDifferences;

     cout << "\nSpecify lookup depth";      cin >> lookupDepth;

     for(int i = 0; i < lookupDepth; i++) {

     }
}
