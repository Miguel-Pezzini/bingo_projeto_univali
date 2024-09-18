#include <iostream>
#include <vector>
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

void menuInGame(Character character) {
    (void)system("cls");
    int opt = 0;
    bool inMenu = true;
    int sizeVector = 0;
    while(inMenu) {
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
                sizeVector = character.pokemons.size();
                (void)system("cls");
                if(sizeVector >= 1) {
                    cout<<"LIST OF POKEMONS: "<<endl;
                    for(int i = 0; i < sizeVector; i++) {
                        cout << character.pokemons.at(i).name << " Level: "<< character.pokemons.at(i).level <<endl;
                    }
                } else {
                    cout<<"YOU DON'T HAVE ANY POKEMONS!"<<endl;
                }
            break;

            case 2:
                sizeVector = character.bag.size();
                (void)system("cls");
                if(sizeVector >= 1) {
                    cout<<"YOUR BAG: "<<endl;
                    for(int i = 0; i < sizeVector; i++) {
                        cout << character.bag.at(i).name <<endl;
                    }
                } else {
                    cout<<"YOU DON'T HAVE ANY ITEMS!"<<endl;
                }
            break;

            case 3:
                return;

            break;
            case 4:
                exit(0);
            break;
            default:
                inMenu = false;
        }
    }
}