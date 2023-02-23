//Import the inbuild libraries in CPP
#include <iostream>
#include <stdlib.h>
using namespace std;

//Array of the board
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

//variables
int choice;
bool gameOn = true;
int row;
int column;
char turn = 'X';

//display board
void display_board() {
    cout<<board[0][0]<<'|'<<board[0][1]<<'|'<<board[0][2]<<endl;
    cout<<board[1][0]<<'|'<<board[1][1]<<'|'<<board[1][2]<<endl;
    cout<<board[2][0]<<'|'<<board[2][1]<<'|'<<board[2][2]<<endl;
}

//take in choice
void selection() {
    cout<<"Player "<<turn<<" "<<"make a selction \n";
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
   if(turn=='X' && board[row][column]!='X' && board[row][column]!='O') {
   board[row][column]='X';
   turn='O';
   }else if(turn=='O' && board[row][column]!='X' && board[row][column]!='O') {
   board[row][column]='O';
   turn='X';
   }else {
    cout<<"Choose another box \n";
   }
}
//check for win
void gameWon() {
    for(int i; i<3; i++){
        //row win
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]){
            cout<<"Win!!";
            gameOn = false;
        //column win
        }else if(board[0][i]==board[1][i] && board[1][i]==board[2][i]){
            cout<<"Win!!";
            gameOn = false;
        //diagonal win
        }else if(board[0][0]==board[1][1] && board[1][1]==board[2][2] || board[0][2]==board[1][1] && board[1][1]==board[2][0]){
            cout<<"Win!!";
            gameOn = false;
        }
    }    
}
//check for draw
int main(){
    cout<<"tictactoe \n";
    while(gameOn) {
        display_board();
        selection();
        gameWon();
    }
    return 0;
}