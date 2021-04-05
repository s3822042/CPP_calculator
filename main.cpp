//
// Created by Paul on 4/5/2021.
//

#include "main.h"
#include <iostream>

using namespace std;

void getUserInput(){
    int score_asm;
    cout << "Please enter your score: ";
    cin >> score_asm;
}

int calculateScore(){
    int final_score = 60;
    return final_score;

}

void printQualification(){
    int score = calculateScore();
    if(score >= 50 && score <60){
        cout << "PA";
    }
    else if(score >= 60 && score < 70){
        cout << "CR";
    }
    else if(score >= 70 && score < 80){
        cout << "DI";
    }
    else if(score >= 80){
        cout << "HD";
    }
    else{
        cout <<"NN";
    }
}
void finalizeScore(){
    printQualification();

}

void calculationGPA(){

}



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
            finalizeScore();
            break;
        case 2:
            calculationGPA();
            break;
        case 3:
            exit(-1);
        default:
            break;
    }
}
int main(){
    printMenu();
    switchMenu();

    return 0;
}

