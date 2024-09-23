
#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include <vector> // Adicione esta linha para usar std::vector
#include <cstdlib>
#include <ctime> 

#include "menu.h"

using namespace std;
int movement(vector<vector<int>>& mat, char key, int &xPosicao, int &yPosicao, Character character);

#endif