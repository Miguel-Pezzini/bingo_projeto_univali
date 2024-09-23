#include <iostream>
#include <vector>
#include <windows.h>
#include "movements.h"

using namespace std;

void setCursorPosition(int x, int y) {
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}

void ClearPosition(int x, int y) {
    setCursorPosition(x, y);
    printf(" ");
}

void putBush(int x, int y) {
    setCursorPosition(x, y);
    printf("\033[0;42m");
    cout << " ";
    printf("\033[0m");
}

void DrawPosition(int x, int y) {
    setCursorPosition(x, y);
    printf("@");
}

void clearAndDrawn(vector<vector<int>>& mat, int &x, int &y, int newX, int newY) {
    ClearPosition(y, x); // Limpa a posição antiga
    mat[x][y] = 0; // Limpa a posição antiga na matriz
    x = newX;
    y = newY;
    mat[x][y] = 2; // Atualiza a nova posição na matriz
    DrawPosition(y, x); // Desenha o personagem na nova posição
}

void putBushAndDrawn(vector<vector<int>>& mat, int &x, int &y, int newX, int newY) {
     putBush(y, x);
     mat[x][y] = 7;
    x = newX;
    y = newY;
    mat[x][y] = 2;
    DrawPosition(y, x); 
}

int movement(vector<vector<int>>& mat, char key, int &xPosicao, int &yPosicao, Character character) {
    if(key == '/') {menuInGame(character); return 2;}; // Menu; 
    int newX = xPosicao;
    int newY = yPosicao;
    switch(key) {
      case 'w':
          newX--;
      break;
      case 's':
          newX++;
      break;
      case 'd':
          newY++;
      break;
      case 'a':
          newY--;
      break;
      default:
        return 0;
    }

    if (newX >= 0 && newX < mat.size() && newY >= 0 && newY < mat[0].size()) {
        // Verifica o tipo do novo local na matriz
        if (mat[newX][newY] != 1 && mat[newX][newY] != 4) { // Se não for parede ou obstáculo
            if (mat[newX][newY] == 3) return 3; // Se passar pela porta 3
            if (mat[newX][newY] == 5) return 5; // Se passar pela porta 5
            if (mat[newX][newY] == 6) return 6; // Dialogo;
            //if(newX < xPosicao) {} // Mexeu para cima;
            //if(newX > xPosicao) {} // Mexeu para baixo;
            //if(newY > yPosicao) {} // Mexeu para direita;
            //if(newY < yPosicao) {} // Mexeu para esquerda;
            if (mat[newX][newY] == 7) {
                int random = rand() % 10;
                if(newX < xPosicao || newX > xPosicao) { // Moveu para cima e baixo
                    if(mat[xPosicao][yPosicao + 1] == 0 || mat[xPosicao][yPosicao - 1] == 0) {
                        if(mat[xPosicao][yPosicao - 1] == 7 && mat[xPosicao - 1][yPosicao] == 7) {}
                        else if(mat[xPosicao][yPosicao + 1] == 7 && mat[xPosicao - 1][yPosicao] == 7) {}
                        else if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {} 
                        else if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {} 
                        else {clearAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    }
                }
                if(newY > yPosicao || newY < yPosicao) { // Moveu para esquerda e direita
                    if(mat[xPosicao + 1][yPosicao] == 0 || mat[xPosicao - 1][yPosicao] == 0) {
                        if(mat[xPosicao - 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {} // Canto inferior direito
                        else if(mat[xPosicao - 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {} // canto inferior esquerdo
                        else if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {} // Canto superior direito
                        else if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {} // Canto superior esquerdo
                        else {clearAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    }
                }
                putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);
                if(random == 7) {return 7;} 
                else {return 0;}
                
            }
            if(mat[newX][newY] == 0) {
                if(newX < xPosicao || newX > xPosicao) { // Moveu para cima e baixo
                    if(mat[xPosicao][yPosicao + 1] == 7 && mat[xPosicao][yPosicao - 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao - 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao - 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                } 
                if(newY > yPosicao || newY < yPosicao) {
                    if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao - 1][yPosicao] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao - 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao - 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao - 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                    if(mat[xPosicao + 1][yPosicao] == 7 && mat[xPosicao][yPosicao + 1] == 7) {putBushAndDrawn(mat, xPosicao, yPosicao, newX, newY);}
                }
            }

            // Atualiza a matriz e o console
            ClearPosition(yPosicao, xPosicao); // Limpa a posição antiga
            mat[xPosicao][yPosicao] = 0; // Limpa a posição antiga na matriz
            xPosicao = newX;
            yPosicao = newY;
            mat[xPosicao][yPosicao] = 2; // Atualiza a nova posição na matriz
            DrawPosition(yPosicao, xPosicao); // Desenha o personagem na nova posição
        }
    }

    return 0;
}
