/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

void EvitarRepeticao(int vet[], int x) {
    int count = 0, size = 5, temp = 0, swapped = true, num = 0;
    bool decrescent = true;
    srand(static_cast<unsigned>(time(0)));
    
        while(count < size) {
            switch(x) {
                case 0: 
                    num = rand() % 15 + 1;
                break;
                case 1:
                    num = rand() % (30 - 16 + 1) + 16;
                break;
                case 2:
                    num = rand() % (45 - 31 + 1) + 31;
                break; 
                case 3:
                    num = rand() % (60 - 46 + 1) + 46;
                break;
                case 4:
                    num = rand() % (75 - 61 + 1) + 61;
                break;
            }
        bool unique = true;
            
        for(int i = 0; i < count; i++) {
            if(vet[i] == num) {
                unique = false;
                break;
            }
        }
            
        if(unique) {
            vet[count] = num;
            count++;
        }
        }
        while(swapped) {
            swapped = false;
            for(int i = 0; i < 5 - 1; i++) {
                if(vet[i] > vet[i + 1]) {
                    swapped = true;
                    temp = vet[i];
                    vet[i] = vet[i + 1];
                    vet[i + 1] = temp;
                }
            }
        }
    }


void popularMatriz(int mat[5][5]) {
    srand(static_cast<unsigned>(time(0)));
    
    int vet[5];
    
    int temp = 0;
    
    int TAM_LINHA = 5;
    int TAM_COLUNA = 5;
    for(int i = 0; i < TAM_LINHA; i++) {
        for(int j = 0; j < TAM_COLUNA; j++) {
            if(i == 0) {
               mat[i][j] = rand() % 15 + 1;

               vet[j] = mat[i][j];
               if(j == 4) {
                  EvitarRepeticao(vet, i);
                  for(int k = 0; k < 5; k++) {
                   mat[i][k] = vet[k];
                  }
               }
            }
            if(i == 1) {
                mat[i][j] = rand() % (30 - 16 + 1) + 16;
                
                vet[j] = mat[i][j];
                if(j == 4) {
                    EvitarRepeticao(vet, i);
                      for(int k = 0; k < 5; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
            if(i == 2) {
                mat[i][j] = rand() % (45 - 31 + 1) + 31;
                vet[j] = mat[i][j];
                if(j == 4) {
                    EvitarRepeticao(vet, i);
                      for(int k = 0; k < 5; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
            if(i == 3) {
                mat[i][j] = rand() % (60 - 46 + 1) + 46;
                vet[j] = mat[i][j];
                if(j == 4) {
                    EvitarRepeticao(vet, i);
                      for(int k = 0; k < 5; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
            if(i == 4) {
                mat[i][j] = rand() % (75 - 61 + 1) + 61;
                vet[j] = mat[i][j];
                if(j == 4) {
                    EvitarRepeticao(vet, i);
                      for(int k = 0; k < 5; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
        }
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }
}

//Primeira linha – sorteados valores de 1 a 15;
//• Segunda linha – sorteados valores de 16 a 30;
//• Terceira linha – sorteados valores de 31 a 45;
//• Quarta linha – sorteados valores de 46 a 60; e
//• Quinta linha – sorteados valores de 61 a 75.

int main()
{
    bool menu = true;
    
    while(menu) {
        int opt;
        cout<<"SELECIONE A OPÇÃO DO MENU: "<<endl;
        cout<<"OPCAO 0 - JOGAR"<<endl;
        cout<<"OPCAO 1 - SOBRE"<<endl;
        cout<<"OPCAO 2 - SAIR"<<endl;
        cin>>opt;
        if(opt == 2) {
            menu = false;
        }
        
        switch(opt) {
            case 0: 
                int matOne[5][5];
                int matTwo[5][5];
                int matThree[5][5];
                int matFour[5][5];
                int matFive[5][5];
                
                popularMatriz(matOne);
            break;
            
            case 1: 
                cout<<"Trabalho realizado para a disciplina de algoritmos e programação II por:"<<endl
                    <<"Miguel Pezzini Kühr, Eduarda, Rafael Barbosa e Mariah Bork em setembro de 2024"<<endl<<endl ;
            break;
        }
    }

    return 0;
}