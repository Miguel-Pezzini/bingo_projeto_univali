#include <iostream>
#include "menu.h"

using namespace std;

void showMenu() {
    cout << "===============================" << endl;
    cout << "              MENU             " << endl;
    cout << "===============================" << endl;
    cout << "1. PLAY" << endl;
    cout << "2. ABOUT ME" << endl;
    cout << "3. LEAVE" << endl;
    cout << "SELECT AN OPTION(1/2/3)";
}

void menu_out() {(void)system("cls");cout<<"LEAVING...";}

void menu_about() {(void)system("cls");cout<<"Project made by Miguel Pezzini with the idea to replicate the game Pokemon from Nintendo using ASCII characters" << endl;}

void menuInGame() {
    int opt = 0;
    cout << "===============================" << endl;
    cout << "              MENU             " << endl;
    cout << "===============================" << endl;
    cout << "1. POKEMONS" << endl;
    cout << "2. BAG" << endl;
    cout << "3. CANCEL" << endl;
    cout << "4. LEAVE GAME" << endl;
    cin >> opt;
    switch(opt) {
        case 1:

        break;

        case 2:

        break;

        case 3:

        break;
        case 4:

        break;
    }
}