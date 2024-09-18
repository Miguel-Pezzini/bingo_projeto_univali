#include <iostream>
#include <windows.h>
#include "maps.h"

using namespace std;

void fillMatrix(vector<vector<int>>& mat, vector<vector<int>> map, int x, int y) {
    int numRows = map.size();
    int numCols = map[0].size();

    if (mat.size() != numRows || mat[0].size() != numCols) {
        cerr << "Erro: A matriz fornecida não tem o tamanho correto." << endl;
        return;
    }

    // Copia o mapa inicial para a matriz m
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            mat[i][j] = map[i][j];
        }
    }

    if (x >= 0 && x < numRows && y >= 0 && y < numCols) {
        mat[x][y] = 2;
    } else {
        cerr << "Erro: A posição inicial da casa está fora dos limites da matriz." << endl;
    }
}

void houseMap(vector<vector<int>>& mat, int x, int y) {
  const vector<vector<int>> map = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 3, 1, 1, 1, 1, 1, 1, 1}
    };
    fillMatrix(mat, map, x, y);
}

void mapOne(vector<vector<int>>& mat, int x, int y) {
  const vector<vector<int>> map = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 4, 4, 4, 4, 4, 0, 1},
        {1, 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 4, 4, 4, 4, 4, 0, 1},
        {1, 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 4, 4, 4, 4, 4, 0, 1},
        {1, 0, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0, 4, 4, 4, 4, 4, 0, 1},
        {1, 0, 4, 4, 4, 5, 4, 4, 4, 0, 0, 0, 0, 4, 4, 3, 4, 4, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    fillMatrix(mat, map, x, y);
}

void labOne(vector<vector<int>>& mat, int x, int y) {
  const vector<vector<int>> map = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1}
};

    fillMatrix(mat, map, x, y);
}

void seeMap(vector<vector<int>>& mat) {
  int numRows = mat.size();
  int numCols = mat[0].size();

  for(int i = 0; i < numRows; i++) {
      for(int j = 0; j < numCols; j++) {
          switch(mat[i][j]) {
              case 0:
                  cout<<" ";
              break;
              case 1:
                printf("\033[0;41m"); 
                cout << " ";
                printf("\033[0m");
              break;
              case 2:
                cout << "@";
                printf("\033[0m");
              break;
              case 3:
                printf("\033[0;43m"); 
                cout << " ";
                printf("\033[0m");
              break;
              case 4:
                printf("\033[0;44m"); 
                cout << " ";
                printf("\033[0m");
              break;
              case 5:
                printf("\033[0;43m"); 
                cout << " ";
                printf("\033[0m");
              break;
              case 6:
                 printf("\033[0;47m"); 
                cout << " ";
                printf("\033[0m");
              break;
                }
            }
            cout<<endl;
        }
}
