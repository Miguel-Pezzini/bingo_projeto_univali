#include <iostream>
#include <string.h>
#include <windows.h>
#include <vector>
#include "menu.h"
#include "maps.h"
#include "movements.h"
using namespace std;
// Pegar tecla
CHAR getch() {
    DWORD mode, cc;
    HANDLE h = GetStdHandle( STD_INPUT_HANDLE );

    if (h == NULL) {
        return 0; // console not found
    }

    GetConsoleMode( h, &mode );
    SetConsoleMode( h, mode & ~(ENABLE_LINE_INPUT | ENABLE_ECHO_INPUT) );
    TCHAR c = 0;
    ReadConsole( h, &c, 1, &cc, NULL );
    SetConsoleMode( h, mode );
    return c;
}

struct Attack {
    string name;
    int power;
    int levelToLearn;
};
struct Pokemon {
    int id;
    string name;
    int level;
    Attack attacks[4];
};

struct Item {
    int id;
    string name;
    string type;
};
struct Character {
    string name;
    bool sex;
    Pokemon pokemons[6];
    vector<Item>bag;
    int money;
};

enum GameState {
    INITIAL_HOUSE,
    MAP_ONE,
    LAB_ONE,
};

void clearScreenAndPrompt() {
    (void)system("cls");
    cout << "PRESS / TO ENTER MENU" << endl;
}

void game_running() {
    // Iniciating the maps
    vector<vector<int>> houseMapMat(7, vector<int>(10, 0));
    vector<vector<int>> mapMat(20, vector<int>(20, 0));

    int xHouseInicial = 2;
    int yHouseInicial = 6;
    int xMapOneInicial = 16;
    int yMapOneInicial = 15;

    bool cityOne = true;
    bool InitialHouse = true;
    bool inMapOne = false;

    GameState currentState = INITIAL_HOUSE;

    char key;

    while(cityOne) {
        houseMap(houseMapMat, xHouseInicial, yHouseInicial);
        mapOne(mapMat, xMapOneInicial, yMapOneInicial);
        int optionPath = 0;

        clearScreenAndPrompt();

        switch(currentState) {
            case INITIAL_HOUSE:
                seeMap(houseMapMat);
                key = getch();
                if(movement(houseMapMat, key, xHouseInicial, yHouseInicial) == 3) {currentState = MAP_ONE;};
            break;
            case MAP_ONE:
                seeMap(mapMat);
                key = getch();
                if(movement(mapMat, key, xHouseInicial, yHouseInicial) == 3) {currentState = INITIAL_HOUSE; xHouseInicial = 5; yHouseInicial = 2;};
            break;
        }
    }
}

int main() {
    int optionMenu = 0;
    bool isRunning = true;

    while(isRunning) {
        showMenu();
        cin >> optionMenu;

        switch(optionMenu) {
            case 1:
                game_running();
            break;
            case 2:
                menu_about();
            break;
            case 3:
                menu_out();
                isRunning = false;
            break;
        }
    }
    return 0;
}