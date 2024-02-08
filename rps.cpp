#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void preanim(){
    system("cls");
    Sleep(500);
    cout << "Rock" << endl;
    Sleep(1000);
    cout << "Paper" << endl;
    Sleep(1000);
    cout << "Scissors!" << endl;
    Sleep(500);
    system("cls");
}



void checkWin(string ms, int rn){
    if (ms == "Rock" || ms == "rock"){
        if (rn == 1){
            cout << "It's a tie!";
            return;
        }
        else if (rn == 2){
            cout << "You lose!";
            return;
        }
    }
    else if (ms == "Paper" || ms == "paper"){
        if (rn == 2){
            cout << "It's a tie!";
            return;
        }
        else if (rn == 3){
            cout << "You lose!";
            return;
        }
    }
    else{
        if (rn == 3){
            cout << "It's a tie!";
            return;
        }
        else if (rn == 1){
            cout << "You lose!";
            return;
        }
    }
    cout << "You win!";
    
    
}

void main_process(){
    preanim();

    string mselection;
    while (1==1){
        cout << endl << "Type in your selection: ";
        getline(cin, mselection);
        if (mselection != "Rock" && mselection != "rock" && mselection != "Paper" && mselection != "paper" && mselection != "Scissors" && mselection != "scissors"){
            cout << "Wrong choice, select 'Rock' or 'Paper' or 'Scissors'!";
            Sleep(1500);
            system("cls");
        }
        else{
            break;
        }
    }
    system("cls");
    cout << "Your selection: " << mselection << endl;
    
    string aselection;
    int rnum;
    srand(time(0));
    rnum = rand() % 3 + 1;
    if (rnum == 1){
        aselection = "Rock";
    }
    else if (rnum == 2){
        aselection = "Paper";
    }
    else{
        aselection = "Scissors";
    }
    Sleep(500);
    cout << "AI choice: " << aselection << endl << endl;
    checkWin(mselection, rnum);
}

int main(){
    system("cls");
    cout << "Press ENTER to start!";
    cin.ignore();
    while (1==1){
        main_process();
        Sleep(3000);
        cout << endl << endl << "CTRL + C to exit" << endl;
        cout << "Press ENTER to restart!";
        cin.ignore();
    }
    
    return 0;
}