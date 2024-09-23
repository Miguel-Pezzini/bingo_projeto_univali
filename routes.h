#ifndef ROUTES_H
#define ROUTES_H
#include <vector> 

using namespace std;

struct Route {
    vector<int> levels;
    vector<int> ids;
};

extern Route RouteOne;

#endif