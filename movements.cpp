#include <iostream>
#include <vector>
#include "movements.h"

using namespace std;

int movement(vector<vector<int>>& mat, char key, int &xPosicao, int &yPosicao) {
    switch(key) {
      case 'w':
          if(mat[xPosicao - 1][yPosicao] == 1 || mat[xPosicao - 1][yPosicao] == 4) return 0; //Não fazer nada
          if(mat[xPosicao - 1][yPosicao] == 3) return 3; // Passou pela porta 3
          mat[xPosicao][yPosicao] = 0;
          xPosicao--;
          mat[xPosicao][yPosicao] = 2;
      break;
      case 's':
          if(mat[xPosicao + 1][yPosicao] == 1 || mat[xPosicao + 1][yPosicao] == 4) return 0; //Não fazer nada
          if(mat[xPosicao + 1][yPosicao] == 3) return 3; // Passou pela porta 3
          mat[xPosicao][yPosicao] = 0;
          xPosicao++;
          mat[xPosicao][yPosicao] = 2;
      break;
      case 'd':
          if(mat[xPosicao][yPosicao + 1] == 1 || mat[xPosicao][yPosicao + 1] == 4) return 0; //Não fazer nada
          if(mat[xPosicao][yPosicao + 1] == 3) return 3; // Passou pela porta 3
          mat[xPosicao][yPosicao] = 0;
          yPosicao++;
          mat[xPosicao][yPosicao] = 2;
      break;
      case 'a':
          if(mat[xPosicao][yPosicao - 1] == 1 || mat[xPosicao][yPosicao - 1] == 4) return 0; //Não fazer nada
          if(mat[xPosicao][yPosicao - 1] == 3) return 3; // Passou pela porta 3
          mat[xPosicao][yPosicao] = 0;
          yPosicao--;
          mat[xPosicao][yPosicao] = 2;
      break;
      default:
        return 0;
    }

    return 0;
}