//
// Created by Paul on 4/5/2021.
//

#include "main.h"
#include <iostream>
#include <string>

using namespace std;


int * getScoreInput(){
    int score[3];
    for(int i = 0 ; i < sizeof(score)/sizeof(score[0]); i++) {
        cout << "Score for assignment " << i + 1 << endl;
        cin >> score[i];
    }
    return score;
}
int * getPercentageInput(){
    int percentage[3];
    for(int i = 0 ; i < sizeof(percentage)/sizeof(percentage[0]); i++) {
        cout << "Percentage for assignment " << i + 1 << endl;
        cin >> percentage[i];
    }
    return percentage;
}

int calculateScore(){
    getScoreInput();
    getPercentageInput();


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
//void finalizeScore(){
//    printQualification();
//
//}
//
//void calculationGPA(){
//
//}



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
            calculateScore();
            break;
        case 2:

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

