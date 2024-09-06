#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <time.h>
#include <string.h>
using namespace std;

#define BLACK        0
#define YELLOW       6
#define WHITE        7

void textcolor (int forecolor, int backcolor) {
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (WORD) (forecolor | backcolor<<4));
}

void resetTextColor() {
    textcolor(7, 0);
}

// Gera um número aleatório da cartela dependendo do x (índice da linha)
int gerarNumeroAleatorio(int x) {
    int num = 0;
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
        return num;
}

// Ordena o vetor para não repetir nenhum número, passa o x (índice da linha) como parâmetro para a função gerarNumeroAleatorio(x)
void evitarRepeticao(int vet[], int x) {
    int count = 0, size = 5, num = 0;
    while(count < size) {
        num = gerarNumeroAleatorio(x);
        bool unique = true;
    
        for(int i = 0; i < count; i++) {
            if(vet[i] == num) {
                // Caso o número seja repetido então vai dar break e voltar para o ínicio do loop (gerando um novo número aleatório)
                unique = false;
                break;
            }
        }
        // Caso o número seja único ent vai incrementar o count
        if(unique) {
            vet[count] = num;
            // Caso o count seja igual ao size quer dizer que todos os números são únicos portando não existem números repetidos
            count++;
        }
    }
}

// Apenas pega o vetor e o ordena em ordem crescente com o bubble sort
void ordenarCrescente(int vet[]) {
    int size = 5, temp = 0, i = 0, j = 0;
    bool swapped = true;

    for (i=size-1; (i >= 1) && (swapped); i--) {
        swapped = false;
        for (j=0; j < i ;j++) {
            if (vet[j+1] < vet[j]) {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                swapped = true;
            }
        }
    }
}

// Preenche a cartela com as duas funções de ordenação para cada linha da matriz
void preencherCartela(int mat[5][5]) {
    int vet[5];
    for(int i = 0; i < 5; i++) {
        evitarRepeticao(vet, i);
        ordenarCrescente(vet);
        for(int k = 0; k < 5; k++) {
            mat[i][k] = vet[k];
        }
    }
}

bool duasCartelasIguais(int cartelax[5][5], int cartelay[5][5]) {
    int numerosRepetidos = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(cartelax[i][j] == cartelay[i][j]) {
                numerosRepetidos++;
            }
        }
    }

    if(numerosRepetidos == 25) {
        return true;
    }

    return false;
}

// Compara duas cartelas para ter certeza que elas não vão se repetir
bool compararCartelas(int cartelaUm[5][5], int cartelaDois[5][5], int cartelaTres[5][5], int cartelaQuatro[5][5], int cartelaCinco[5][5]) {
    
    return duasCartelasIguais(cartelaUm, cartelaDois) &&
           duasCartelasIguais(cartelaUm, cartelaTres) &&
           duasCartelasIguais(cartelaUm, cartelaQuatro) &&
           duasCartelasIguais(cartelaUm, cartelaCinco) &&
           duasCartelasIguais(cartelaDois, cartelaTres) &&
           duasCartelasIguais(cartelaDois, cartelaQuatro) &&
           duasCartelasIguais(cartelaDois, cartelaCinco) &&
           duasCartelasIguais(cartelaTres, cartelaQuatro) &&
           duasCartelasIguais(cartelaTres, cartelaCinco) &&
           duasCartelasIguais(cartelaQuatro, cartelaCinco);
}

// Mostra a cartela com os números acertados da cor amarela e os demais da cor normal
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
            resetTextColor();
        }
        cout << endl;
    }
}

// Função que retorna um número aleatório entre 1 e 75
int sortearNumero() {
    int num = rand() % 75; // Números entre 1 e 75

    return num;
}

// Função para gerar o número sorteado toda vez que for apertado a tecla enter
int pegarNumeroSorteado() {
    char tecla;
    int sortNumber;
    tecla = cin.get();
    sortNumber = sortearNumero();
    return sortNumber;
}

// Função que retorna um booleano true toda vez que o número já existe na lista e false caso ele não exista
bool sorteioPresente(int vet[], int tamanhoDaListaDeSorteio, int num) {
    for (int i = 0; i < tamanhoDaListaDeSorteio; ++i) {
        if (vet[i] == num) {
            return true;
        }
    }
    return false;
}

// Função feita para não haver números repetidos na lista de sorteios
void naoRepetirListaSorteio(int vet[], int tamanhoDaListaDeSorteio, int &sorteio) {
    bool numeroUnico = false;

    while(!numeroUnico) {
        sorteio = rand() % 75 + 1;
        if(!sorteioPresente(vet, tamanhoDaListaDeSorteio, sorteio)) {
            numeroUnico = true;
        }
    }
}

// Ordenação da lista de sorteios em ordem crescente utilizando o bubble sort
void ordernarSorteioBubbleSort(int vet[], int tamanhoDaListaDeSorteio) {
    int i, j, cond, temp;
    cond = 1;
    for (i=tamanhoDaListaDeSorteio -1 ; (i >= 1) && (cond == 1); i--) {
    cond = 0;
        for (j=0; j < i ;j++) {
            if (vet[j+1] < vet[j]) {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                cond = 1;
            }
        }
    }
}

// Adiciona um item no sorteio depois de fazer as devidas ordenações
void adicionaSorteio(int vet[], int &tamanhoDaListaDeSorteio, int &sorteio) {
    bool numeroUnico = false;

    naoRepetirListaSorteio(vet, tamanhoDaListaDeSorteio, sorteio);

    cout<<"O numero sorteado e: ";
    textcolor(6, 0);
    cout<<sorteio<<" ";
    textcolor(7, 0);

    if(tamanhoDaListaDeSorteio < 75) {
        vet[tamanhoDaListaDeSorteio] = sorteio;
        tamanhoDaListaDeSorteio++;
    } else {
        cout<<"O array esta cheio";
    }

    ordernarSorteioBubbleSort(vet, tamanhoDaListaDeSorteio);
}

// Função que mostra a lista de sorteios
void mostrarSorteio(int vet[], int tamanhoDaListaDeSorteio) {
    cout<<"Numeros sorteados: ";
    for(int i = 0; i < tamanhoDaListaDeSorteio; i++) {
        cout<<vet[i]<<" ";
    }
}

// Função que retorna 1 se um item da cartela for marcado para cada sorteio e 0 caso não for marcado
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

// Função que retorna string para escrever nome
string inserirNome() {
    string nome;
    cout<<"Digite o seu nome da sua cartela: ";
    cin>>nome;

    return nome;
}

// Mensagem padrão para o vencedor
void ganhou(string nome, int identificador) {
    cout<<endl<<"Parabens, o jogador: "<<nome<<" da cartela "<<identificador<<" e o ganhador."<<endl<<endl;
}

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

    int identificadorCartelaUm = 1;
    int identificadorCartelaDois = 2;
    int identificadorCartelaTres = 3;
    int identificadorCartelaQuatro = 4;
    int identificadorCartelaCinco = 5;


    while(menu) {
        textcolor(7, 0);
        int marcadoUm = 0;
        int marcadoDois = 0;
        int marcadoTres = 0;
        int marcadoQuatro = 0;
        int marcadoCinco = 0;

        bool cartelasRepetidas = true;

        int marcadoUmTotal = 0;
        int marcadoDoisTotal = 0;
        int marcadoTresTotal = 0;
        int marcadoQuatroTotal = 0;
        int marcadoCincoTotal = 0;
        int opt;
        bool isRunning = true;
        int tamanhoDaListaDeSorteio = 0;
        cout << "+-----------------------------+" << endl;
        cout << "|     MENU PRINCIPAL           |" << endl;
        cout << "+-----------------------------+" << endl;
        cout << "|     OPCAO 0 - JOGAR          |"<< endl;
        cout << "|     OPCAO 1 - SOBRE          |"<< endl;
        cout << "|     OPCAO 2 - SAIR           |"<< endl;
        cout << "+-----------------------------+" << endl;
        cin>>opt;
        if(opt == 2) {
            menu = false;
        }

        switch(opt) {
            case 0:
                (void)system("cls");
                int sorteio;
                int listaDeSorteios[75];

                int cartelaUm[5][5];
                int cartelaDois[5][5];
                int cartelaTres[5][5];
                int cartelaQuatro[5][5];
                int cartelaCinco[5][5];

                while(cartelasRepetidas) {
                    preencherCartela(cartelaUm);
                    preencherCartela(cartelaDois);
                    preencherCartela(cartelaTres);
                    preencherCartela(cartelaQuatro);
                    preencherCartela(cartelaCinco);

                    cartelasRepetidas = compararCartelas(cartelaUm, cartelaDois, cartelaTres, cartelaQuatro, cartelaCinco);
                }

                // Criar os nomes de cada cartela
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
                    cout<<endl;

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

                    mostrarCartela(cartelaUm, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaDois, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaTres, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaQuatro, listaDeSorteios, tamanhoDaListaDeSorteio);
                    mostrarCartela(cartelaCinco, listaDeSorteios, tamanhoDaListaDeSorteio);

                    if(marcadoUmTotal == 25) {
                        ganhou(nomeUm, identificadorCartelaUm);
                        break;
                    }
                    if(marcadoDoisTotal == 25) {
                        ganhou(nomeDois, identificadorCartelaDois);
                        break;
                    }
                    if(marcadoTresTotal == 25) {
                        ganhou(nomeTres, identificadorCartelaTres);
                        break;
                    }
                    if(marcadoQuatroTotal == 25) {
                        ganhou(nomeQuatro, identificadorCartelaQuatro);
                        break;
                    }
                    if(marcadoCincoTotal == 25) {
                        ganhou(nomeCinco, identificadorCartelaCinco);
                        break;
                    }
                }
            break;

            case 1:
                (void)system("cls");
                cout<<"Trabalho realizado para a disciplina de algoritmos e programacao II do professor Rafael Ballottin Martins por:"<<endl
                    <<"Miguel Pezzini Kuhr, Eduarda, Rafael Barbosa e Mariah Bork em setembro de 2024"<<endl<<endl ;
            break;
        }
    }

    return 0;
}