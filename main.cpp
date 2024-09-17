#include <iostream>
#include <string.h>
#include <windows.h>
#include <vector>
#include <io.h>
#include <fcntl.h>
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

    int x = 2; // Initial x
    int y = 6; // Initial y

    bool cityOne = true;

    GameState currentState = INITIAL_HOUSE;

    char key;

    while(cityOne) {
        
        int optionPath = 0;
        (void)system("cls");
        //cout << "PRESS / TO ENTER MENU" << endl;

        switch(currentState) {
            case INITIAL_HOUSE:
                houseMap(houseMapMat, x, y);
                seeMap(houseMapMat);
                while(true) {
                    key = getch();
                    if(movement(houseMapMat, key, x, y) == 3) {currentState = MAP_ONE; x = 16; y = 15; (void)system("cls"); break;};
                }
            break;
            case MAP_ONE:
                mapOne(mapMat, x, y);
                seeMap(mapMat);
                while(true) {
                    key = getch();
                    if(movement(mapMat, key, x, y) == 3) {currentState = INITIAL_HOUSE; x = 5; y = 2; (void)system("cls"); break;}; // go to INITIAL_HOUSE
                }
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