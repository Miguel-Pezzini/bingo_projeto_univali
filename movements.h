
#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include <vector> // Adicione esta linha para usar std::vector

using namespace std;
int movement(vector<vector<int>>& mat, char key, int &xPosicao, int &yPosicao);
void compareBufferWithNormal(vector<vector<int>>& mat, vector<vector<int>>& matBuffer);

#endif