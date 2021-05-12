//
// Created by Paul on 4/5/2021.
//

#include <iostream>

using namespace std;


void getScoreInput(int n , int scoreArray[]){
    for(int i = 0 ; i < n ; i++){
        cout << "The score for assigment:" << " " << i + 1 <<endl;
        cin >> scoreArray[i] ;
    }
}

void getMaxScoreInput(int n , int maxScoreArray[]){
    for(int i = 0 ; i < n ; i++){
        cout << "The maximum score for assigment" << " " << i+1 <<endl;
        cin >> maxScoreArray[i];
    }
}

void getPercentageInput(int n , int percentageArray[]){
    for(int i = 0 ; i < n ; i++){
        cout << "The percentage for assigment" << " " << i + 1 <<endl;
        cin >> percentageArray[i];
    }
}

float calculateScore(int n , int scoreArray[], int maxScoreArray[], int percentageArray[]){
    float final_score = 0;
    getScoreInput(n , scoreArray);
    getMaxScoreInput(n , maxScoreArray);
    getPercentageInput(n , percentageArray);
    for(int i = 0; i < n; i++){
        final_score += ((float)scoreArray[i]/(float)maxScoreArray[i])*(float)percentageArray[i];
    }
    return final_score;
}

void printQualification(int score){
    if(score >= 50 && score <60){
        cout << score << " " << "PA";
    }
    else if(score >= 60 && score < 70){
        cout << score << " " << "CR";
    }
    else if(score >= 70 && score < 80){
        cout << score << " " << "DI";
    }
    else if(score >= 80){
        cout << score << " " << "HD";
    }
    else{
        cout << score << " " <<"NN";
    }
}

void showScore(){
    int n;
    float final_score;
    cout << "How many assignment you have:" << endl;
    cin >> n;
    int scoreArray[n], maxScoreArray[n], percentageArray[n];

    final_score = calculateScore(n, scoreArray, maxScoreArray, percentageArray);
    printQualification((int)final_score);
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
    int userInput;
    cout << "Please enter your choice:";
    cin >> userInput;
    switch (userInput) {
        case 1:
            showScore();
            break;
        case 2:
            break;

    }
}
int main(){
    printMenu();
    switchMenu();
    return 0;
}

