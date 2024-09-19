#include <iostream>
#include <string.h>
#include <windows.h>
#include <vector>
#include <io.h>
#include <fcntl.h>
#include "dialogs/dialogs.h"
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

struct Route {
    vector<int> levels;
    vector<int> ids;
};

enum GameState {
    INITIAL_HOUSE,
    MAP_ONE,
    LAB_ONE,
};

void game_running(Character character) {
    // Iniciating the maps
    vector<vector<int>> houseMapMat(7, vector<int>(10, 0));
    vector<vector<int>> mapMat(20, vector<int>(20, 0));
    vector<vector<int>> labMat(15, vector<int>(15, 0));

    Route RouteOne;
    RouteOne.levels = {2, 5};
    RouteOne.ids = {10, 11, 13, 14, 16, 19};

    int x = 2; // Initial x
    int y = 6; // Initial y

    bool firstDialogWithProfessor = true;

    bool cityOne = true;

    GameState currentState = INITIAL_HOUSE;

    char key;

    while(cityOne) {
        
        int optionPath = 0;
        (void)system("cls");

        switch(currentState) {
            case INITIAL_HOUSE:
                houseMap(houseMapMat, x, y);
                seeMap(houseMapMat);
                while(true) {
                    key = getch();
                    optionPath = movement(houseMapMat, key, x, y, character);
                    if(optionPath == 3) {currentState = MAP_ONE; x = 16; y = 15; (void)system("cls"); break;}; // go to MAP_ONE
                    if(optionPath == 2) {break;}; // MENU
                }
            break;
            case MAP_ONE:
                mapOne(mapMat, x, y);
                seeMap(mapMat);
                while(true) {
                    key = getch();
                    optionPath = movement(mapMat, key, x, y, character);
                    if(optionPath == 3) {currentState = INITIAL_HOUSE; x = 5; y = 2; (void)system("cls"); break;}; // go to INITIAL_HOUSE
                    if(optionPath == 5) {currentState = LAB_ONE; x = 13; y = 7; (void)system("cls"); break;}; // go to LAB_ONE
                    if(optionPath == 2) {break;}; // MENU
                }
            break;
            case LAB_ONE:
                labOne(labMat, x, y);
                seeMap(labMat);
                while(true) {
                    key = getch();
                    optionPath = movement(labMat, key, x, y, character);
                    if(optionPath == 3) {currentState = MAP_ONE; x = 16; y = 5; (void)system("cls"); break;}; // go to MAP_ONE
                    if(optionPath == 2) {break;}; // MENU
                    if(optionPath == 6) {dialogLabOne(character, firstDialogWithProfessor);break;};
                }
            break;
        }
    }
}

int main() {
    int optionMenu = 0;
    bool isRunning = true;
    Character character;

    while(isRunning) {
        showMenu();
        cin >> optionMenu;

        switch(optionMenu) {
            case 1:
                game_running(character);
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