//
// Created by Paul on 4/5/2021.
//

#include "main.h"
#include <iostream>
#include <string>

using namespace std;

void getLengthOfArray(int &n) {
    cout << "How many assignment you have:" << endl;
    cin >> n;
}
void getScoreInput(){
    int x;
    getLengthOfArray(x);
    int scoreArray[x];
    for(int i = 1 ; i < x+1 ; i++){
        cout << "The score for assigment" << " " << i <<endl;
        cin >> scoreArray[i];
    }
}

void getMaxScoreInput(){
    int x;
    getLengthOfArray(x);
    int maxScoreArray[x];
    for(int i = 1 ; i < x+1 ; i++){
        cout << "The maximum score for assigment" << " " << i <<endl;
        cin >> maxScoreArray[i];
    }

}

void getPercentageInput(){
    int x;
    getLengthOfArray(x);
    int percentageArray[x];
    for(int i = 1 ; i < x+1 ; i++){
        cout << "The percentage for assigment" << " " << i <<endl;
        cin >> percentageArray[i];
    }
}


void calculateScore(){
    cout << getScoreInput();
    getMaxScoreInput();
    getPercentageInput();
}

//void printQualification(){
//    int score = calculateScore();
//    if(score >= 50 && score <60){
//        cout << score << " " << "PA";
//    }
//    else if(score >= 60 && score < 70){
//        cout << score << " " << "CR";
//    }
//    else if(score >= 70 && score < 80){
//        cout << score << " " << "DI";
//    }
//    else if(score >= 80){
//        cout << score << " " << "HD";
//    }
//    else{
//        cout << score << " " <<"NN";
//    }
//}
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
    int userInput;
    cout << "Please enter your choice:";
    cin >> userInput;
    switch (userInput) {
        case 1:
            getScoreInput();
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
    getScoreInput();

    return 0;
}

