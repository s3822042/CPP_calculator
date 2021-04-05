//
// Created by Paul on 4/5/2021.
//

#include "main.h"
#include <iostream>

using namespace std;

void printMenu(){
    cout << "Welcome to Calculation Program\n";
    cout << "1. Calculate score\n";
    cout << "2. Calculate GPA\n";
    cout << "3. Exit\n";
}

void switchMenu(){
    cout << "Please enter your choice:";
    int userInput;
    cin >> userInput;
    switch (userInput) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            exit(-1);

    }
}

int main(){
    printMenu();
    switchMenu();
}

