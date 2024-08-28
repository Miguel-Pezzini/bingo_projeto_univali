#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

void EvitarRepeticaoEOrdernarCrescente(int vet[], int x) {
    int count = 0, size = 5, temp = 0, swapped = true, num = 0;
    bool decrescent = true;
    srand(static_cast<unsigned>(time(0)));
    
        while(count < size) {
            switch(x) {
                case 0: 
                    num = rand() % 15 + 1; // Números entre 1 e 15
                break;
                case 1:
                    num = rand() % (30 - 16 + 1) + 16; // Números entre 16 e 30
                break;
                case 2:
                    num = rand() % (45 - 31 + 1) + 31; // Números entre 31 e 45
                break; 
                case 3:
                    num = rand() % (60 - 46 + 1) + 46; // Números entre 46 e 60
                break;
                case 4:
                    num = rand() % (75 - 61 + 1) + 61; // Números entre 61 e 75
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

void preencherCartela(int mat[5][5]) {
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
               if(j == TAM_COLUNA - 1) {
                  EvitarRepeticaoEOrdernarCrescente(vet, i);
                  for(int k = 0; k < TAM_COLUNA; k++) {
                   mat[i][k] = vet[k];
                  }
               }
            }
            if(i == 1) {
                mat[i][j] = rand() % (30 - 16 + 1) + 16;
                
                vet[j] = mat[i][j];
                if(j == TAM_COLUNA - 1) {
                    EvitarRepeticaoEOrdernarCrescente(vet, i);
                      for(int k = 0; k < TAM_COLUNA; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
            if(i == 2) {
                mat[i][j] = rand() % (45 - 31 + 1) + 31;
                vet[j] = mat[i][j];
                if(j == TAM_COLUNA - 1) {
                    EvitarRepeticaoEOrdernarCrescente(vet, i);
                      for(int k = 0; k < TAM_COLUNA; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
            if(i == 3) {
                mat[i][j] = rand() % (60 - 46 + 1) + 46;
                vet[j] = mat[i][j];
                if(j == TAM_COLUNA - 1) {
                    EvitarRepeticaoEOrdernarCrescente(vet, i);
                      for(int k = 0; k < TAM_COLUNA; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
            if(i == 4) {
                mat[i][j] = rand() % (75 - 61 + 1) + 61;
                vet[j] = mat[i][j];
                if(j == TAM_COLUNA - 1) {
                    EvitarRepeticaoEOrdernarCrescente(vet, i);
                      for(int k = 0; k < TAM_COLUNA; k++) {
                       mat[i][k] = vet[k];
                      }
                }
            }
        }
    }
}

void mostrarCartela(int mat[5][5]) {
    cout<<endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int sortearNumero() {
    int num = rand() % 75; // Números entre 1 e 15

    return num;
}

int pegarNumeroSorteado() {
    char tecla;
    int sortNumber;
    tecla = cin.get();
    sortNumber = sortearNumero();
    return sortNumber;
}

bool sorteioPresente(int vet[], int tamanhoDaListaDeSorteio, int num) {
    for (int i = 0; i < tamanhoDaListaDeSorteio; ++i) {
        if (vet[i] == num) {
            return true;
        }
    }
    return false;
}

void adicionaSorteio(int vet[], int &tamanhoDaListaDeSorteio, int sorteio) {
    int temp = 0;
    bool trocou = true;
    bool numeroUnico = false;

    while(!numeroUnico) {
        sorteio = rand() % 75 + 1;
        if(!sorteioPresente(vet, tamanhoDaListaDeSorteio, sorteio)) {
            numeroUnico = true;
        }
    }

    if(tamanhoDaListaDeSorteio < 75) {
        vet[tamanhoDaListaDeSorteio] = sorteio;
        tamanhoDaListaDeSorteio++;
    } else {
        cout<<"O array esta cheio";
    } 


    while(trocou) {
        trocou = false;
        for(int i = 0; i < tamanhoDaListaDeSorteio - 1; i++) {
            if(vet[i] > vet[i + 1]) {
                trocou = true;
                temp = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = temp;
            }
        }
    }
}

void mostrarSorteio(int vet[], int tamanhoDaListaDeSorteio) {
    cout<<"Numeros sorteados: ";
    for(int i = 0; i < tamanhoDaListaDeSorteio; i++) {
        cout<<vet[i]<<" ";
    }
}

void marcarBingo(int listaDeSorteios[], int tamanhoDaListaDeSorteio, int cartelaDoBingo[5][5]) {
    for(int i = 0; i <tamanhoDaListaDeSorteio; i++) {
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) {
                if(cartelaDoBingo[j][k] == listaDeSorteios[i]) {
                    cartelaDoBingo[j][k] = 0;
                }
            }
        }
    }
}

// Primeira linha – sorteados valores de 1 a 15;
// Segunda linha – sorteados valores de 16 a 30;
// Terceira linha – sorteados valores de 31 a 45;
// Quarta linha – sorteados valores de 46 a 60; e
// Quinta linha – sorteados valores de 61 a 75.

int main()
{
    bool menu = true;
    
    while(menu) {
        int opt;
        int tamanhoDaListaDeSorteio = 0;
        cout<<"SELECIONE A OPCAO DO MENU: "<<endl;
        cout<<"OPCAO 0 - JOGAR"<<endl;
        cout<<"OPCAO 1 - SOBRE"<<endl;
        cout<<"OPCAO 2 - SAIR"<<endl;
        cin>>opt;
        if(opt == 2) {
            menu = false;
        }
        
        switch(opt) {
            case 0: 
                int numeroSorteado;
                bool isRunning;
                int listaDeSorteios[75];
                int cartelaUm[5][5];
                int cartelaDois[5][5];
                int cartelaTres[5][5];
                int cartelaQuatro[5][5];
                int cartelaCinco[5][5];
                
                preencherCartela(cartelaUm);
                //mostrarMatriz(matOne);

                while(isRunning) {
                    numeroSorteado = pegarNumeroSorteado();
                    adicionaSorteio(listaDeSorteios, tamanhoDaListaDeSorteio, numeroSorteado);
                    mostrarSorteio(listaDeSorteios, tamanhoDaListaDeSorteio);
                    marcarBingo(listaDeSorteios, tamanhoDaListaDeSorteio, cartelaUm);  
                    mostrarCartela(cartelaUm);     
                }
            break;
            
            case 1: 
                cout<<"Trabalho realizado para a disciplina de algoritmos e programacao II por:"<<endl
                    <<"Miguel Pezzini Kuhr, Eduarda, Rafael Barbosa e Mariah Bork em setembro de 2024"<<endl<<endl ;
            break;
        }
    }

    return 0;
}