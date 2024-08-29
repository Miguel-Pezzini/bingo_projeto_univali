#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <time.h>
#include <string.h>
using namespace std;

#define BLACK        0
#define BLUE         1
#define GREEN        2
#define AQUA         3
#define RED          4
#define PURPLE       5
#define YELLOW       6
#define WHITE        7
#define GRAY         8
#define LIGHTBLUE    9
#define LIGHTGREEN   10
#define LIGHTAQUA    11
#define LIGHTRED     12
#define LIGHTPURPLE  13
#define LIGHTYELLOW  14
#define BRIGHTWHITE  15


void textcolor (int forecolor, int backcolor) {
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (WORD) (forecolor | backcolor<<4));
}

void EvitarRepeticaoEOrdernarCrescente(int vet[], int x) {
    int count = 0, size = 5, temp = 0, swapped = true, num = 0;
    bool decrescent = true;

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

void mostrarCartela(int cartela[5][5], int listaDeSorteios[], int tamanhoDaListaDeSorteios) {
    cout<<endl;
    bool marcado[5][5] = { false };
    for(int i = 0; i < tamanhoDaListaDeSorteios; i++) {
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) {
                if(cartela[j][k] == listaDeSorteios[i]) {
                    marcado[j][k] = true;
                }
            }
        }
    }
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 5; k++) {
            if (marcado[j][k]) {
                textcolor(6, 0); // Cor amarela para números sorteados
            } else {
                textcolor(7, 0); // Cor branca para números não sorteados
            }
            cout << cartela[j][k] << " ";
        }
        cout << endl;
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

void adicionaSorteio(int vet[], int &tamanhoDaListaDeSorteio, int &sorteio) {
    int temp = 0;
    bool trocou = true;
    bool numeroUnico = false;

    while(!numeroUnico) {
        sorteio = rand() % 75 + 1;
        if(!sorteioPresente(vet, tamanhoDaListaDeSorteio, sorteio)) {
            numeroUnico = true;
        }
    }

    cout<<"O numero sorteado e: "<<sorteio<<" ";

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

int marcarBingo(int cartelaDoBingo[5][5], int sorteio) {
    int marcado = 0;
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) {
                if(cartelaDoBingo[j][k] == sorteio) {
                    marcado = 1;
                }
            }
        }
        return marcado;
    }


string inserirNome() {
    string nome;
    cout<<"Digite o seu nome da sua cartela: ";
    cin>>nome;

    return nome;
}

void ganhou(string nome) {
    cout<<endl<<"Parabens, o jogador: "<<nome<<" e o ganhador."<<endl<<endl;
}

// Primeira linha – sorteados valores de 1 a 15;
// Segunda linha – sorteados valores de 16 a 30;
// Terceira linha – sorteados valores de 31 a 45;
// Quarta linha – sorteados valores de 46 a 60; e
// Quinta linha – sorteados valores de 61 a 75.

int main()
{
    textcolor(7, 0);
    srand(static_cast<unsigned int>(time(0)));
    bool menu = true;

    string nomeUm;
    string nomeDois;
    string nomeTres;
    string nomeQuatro;
    string nomeCinco;


    while(menu) {
        textcolor(7, 0);
        int marcadoUm = 0;
        int marcadoDois = 0;
        int marcadoTres = 0;
        int marcadoQuatro = 0;
        int marcadoCinco = 0;

        int marcadoUmTotal = 0;
        int marcadoDoisTotal = 0;
        int marcadoTresTotal = 0;
        int marcadoQuatroTotal = 0;
        int marcadoCincoTotal = 0;
        int opt;
        bool isRunning = true;
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
                int sorteio;
                int listaDeSorteios[75];
                int cartelaUm[5][5];
                int cartelaDois[5][5];
                int cartelaTres[5][5];
                int cartelaQuatro[5][5];
                int cartelaCinco[5][5];

                preencherCartela(cartelaUm);
                preencherCartela(cartelaDois);
                preencherCartela(cartelaTres);
                preencherCartela(cartelaQuatro);
                preencherCartela(cartelaCinco);

                nomeUm = inserirNome();
                nomeDois = inserirNome();
                nomeTres = inserirNome();
                nomeQuatro = inserirNome();
                nomeCinco = inserirNome();

                while(isRunning) {
                    marcadoUm = 0;
                    marcadoDois = 0;
                    marcadoTres = 0;
                    marcadoQuatro = 0;
                    marcadoCinco = 0;
                    sorteio = pegarNumeroSorteado();
                    adicionaSorteio(listaDeSorteios, tamanhoDaListaDeSorteio, sorteio);
                    mostrarSorteio(listaDeSorteios, tamanhoDaListaDeSorteio);

                    marcadoUm = marcarBingo(cartelaUm, sorteio);
                    marcadoDois = marcarBingo(cartelaDois, sorteio);
                    marcadoTres = marcarBingo(cartelaTres, sorteio);
                    marcadoQuatro = marcarBingo(cartelaQuatro, sorteio);
                    marcadoCinco = marcarBingo(cartelaCinco, sorteio);

                    if(marcadoUm == 1) {
                        marcadoUmTotal++;
                    }

                    if(marcadoDois == 1) {
                        marcadoDoisTotal++;
                    }

                    if(marcadoTres == 1) {
                        marcadoTresTotal++;
                    }

                    if(marcadoQuatro == 1) {
                        marcadoQuatroTotal++;
                    }

                    if(marcadoCinco == 1) {
                        marcadoCincoTotal++;
                    }

                    cout<<marcadoUmTotal;

                    mostrarCartela(cartelaUm, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaDois, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaTres, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaQuatro, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaCinco, listaDeSorteios, tamanhoDaListaDeSorteio);

                    if(marcadoUmTotal == 25) {
                        ganhou(nomeUm);
                        isRunning = false;
                    }
                    if(marcadoDoisTotal == 25) {
                        ganhou(nomeDois);
                        isRunning = false;
                    }
                    if(marcadoTresTotal == 25) {
                        ganhou(nomeTres);
                        isRunning = false;
                    }
                    if(marcadoQuatroTotal == 25) {
                        ganhou(nomeQuatro);
                        isRunning = false;
                    }
                    if(marcadoCincoTotal == 25) {
                        ganhou(nomeCinco);
                        isRunning = false;
                    }
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