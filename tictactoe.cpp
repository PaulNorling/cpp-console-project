//Import the inbuild libraries in CPP
#include <iostream>
#include <stdlib.h>
using namespace std;
//Array for the board
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

//variables
int choice;
bool gameOn= true;
int row, column;



//take in choice
void selection() {
    cout<<"make a selction \n";
    cin>> choice;
   switch(choice) {
    case 1: row=0; column=0; break;
    case 2: row=0; column=1; break;
    case 3: row=0; column=2; break;
    case 4: row=1; column=0; break;
    case 5: row=1; column=1; break;
    case 6: row=1; column=2; break;
    case 7: row=2; column=0; break;
    case 8: row=2; column=1; break;
    case 9: row=2; column=2; break;
    default:
        cout<<"invalid selection \n";
   }
   if(choice==1) {
   board[row][column]='X';
   }
   cout<<board[0][0]<<endl;
}

int main(){
    cout<<"tictactoe \n";
    while(gameOn) {
        selection();
    }
    return 0;
}