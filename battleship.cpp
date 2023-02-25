//Import the inbuild libraries in CPP
#include <iostream>
#include <stdlib.h>
using namespace std;

//variables
bool gameOn = true;
char choice;
char rowCharacter;
int columnInteger;
int row;
int column;
int turns = 0;
int hits = 0;
//Array of the board
char board[10][10]={{' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},};

//Fleet positions
char fleet[10][10]={{' ','S','S','S',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ','S','S','S','S','S',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ','S',' '},
                    {' ',' ','S',' ',' ',' ',' ',' ','S',' '},
                    {' ',' ','S',' ','S',' ',' ',' ','S',' '},
                    {' ',' ',' ',' ','S',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ','S',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ','S',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},};

//display board
void display_board() {
    cout<<"  "<<1<<'|'<<2<<'|'<<3<<'|'<<4<<'|'<<5<<'|'<<6<<'|'<<7<<'|'<<8<<'|'<<9<<'|'<<10<<endl;
    cout<<'A'<<'|'<<board[0][0]<<'|'<<board[0][1]<<'|'<<board[0][2]<<'|'<<board[0][3]<<'|'<<board[0][4]<<'|'<<board[0][5]<<'|'<<board[0][6]<<'|'<<board[0][7]<<'|'<<board[0][8]<<'|'<<board[0][9]<<'|'<<endl;
    cout<<'B'<<'|'<<board[1][0]<<'|'<<board[1][1]<<'|'<<board[1][2]<<'|'<<board[1][3]<<'|'<<board[1][4]<<'|'<<board[1][5]<<'|'<<board[1][6]<<'|'<<board[1][7]<<'|'<<board[1][8]<<'|'<<board[1][9]<<'|'<<endl;
    cout<<'C'<<'|'<<board[2][0]<<'|'<<board[2][1]<<'|'<<board[2][2]<<'|'<<board[2][3]<<'|'<<board[2][4]<<'|'<<board[2][5]<<'|'<<board[2][6]<<'|'<<board[2][7]<<'|'<<board[2][8]<<'|'<<board[2][9]<<'|'<<endl;
    cout<<'D'<<'|'<<board[3][0]<<'|'<<board[3][1]<<'|'<<board[3][2]<<'|'<<board[3][3]<<'|'<<board[3][4]<<'|'<<board[3][5]<<'|'<<board[3][6]<<'|'<<board[3][7]<<'|'<<board[3][8]<<'|'<<board[3][9]<<'|'<<endl;
    cout<<'E'<<'|'<<board[4][0]<<'|'<<board[4][1]<<'|'<<board[4][2]<<'|'<<board[4][3]<<'|'<<board[4][4]<<'|'<<board[4][5]<<'|'<<board[4][6]<<'|'<<board[4][7]<<'|'<<board[4][8]<<'|'<<board[4][9]<<'|'<<endl;
    cout<<'F'<<'|'<<board[5][0]<<'|'<<board[5][1]<<'|'<<board[5][2]<<'|'<<board[5][3]<<'|'<<board[5][4]<<'|'<<board[5][5]<<'|'<<board[5][6]<<'|'<<board[5][7]<<'|'<<board[5][8]<<'|'<<board[5][9]<<'|'<<endl;
    cout<<'G'<<'|'<<board[6][0]<<'|'<<board[6][1]<<'|'<<board[6][2]<<'|'<<board[6][3]<<'|'<<board[6][4]<<'|'<<board[6][5]<<'|'<<board[6][6]<<'|'<<board[6][7]<<'|'<<board[6][8]<<'|'<<board[6][9]<<'|'<<endl;
    cout<<'H'<<'|'<<board[7][0]<<'|'<<board[7][1]<<'|'<<board[7][2]<<'|'<<board[7][3]<<'|'<<board[7][4]<<'|'<<board[7][5]<<'|'<<board[7][6]<<'|'<<board[7][7]<<'|'<<board[7][8]<<'|'<<board[7][9]<<'|'<<endl;
    cout<<'I'<<'|'<<board[8][0]<<'|'<<board[8][1]<<'|'<<board[8][2]<<'|'<<board[8][3]<<'|'<<board[8][4]<<'|'<<board[8][5]<<'|'<<board[8][6]<<'|'<<board[8][7]<<'|'<<board[8][8]<<'|'<<board[8][9]<<'|'<<endl;
    cout<<'J'<<'|'<<board[9][0]<<'|'<<board[9][1]<<'|'<<board[9][2]<<'|'<<board[9][3]<<'|'<<board[9][4]<<'|'<<board[9][5]<<'|'<<board[9][6]<<'|'<<board[9][7]<<'|'<<board[9][8]<<'|'<<board[9][9]<<'|'<<endl;
}
//collect player selection 
void selection() {
    cout<<"Select Row \n";
    cin>>rowCharacter;
    switch(rowCharacter){
        case ('A'): row=0; break;
        case ('B'): row=1; break;
        case ('C'): row=2; break;
        case ('D'): row=3; break;
        case ('E'): row=4; break;
        case ('F'): row=5; break;
        case ('G'): row=6; break;
        case ('H'): row=7; break;
        case ('I'): row=8; break;
        case ('J'): row=9; break;
        case ('a'): row=0; break;
        case ('b'): row=1; break;
        case ('c'): row=2; break;
        case ('d'): row=3; break;
        case ('e'): row=4; break;
        case ('f'): row=5; break;
        case ('g'): row=6; break;
        case ('h'): row=7; break;
        case ('i'): row=8; break;
        case ('j'): row=9; break;
        default:
        cout<<"invalid selection \n";
    }
    cout<<"Select Column \n";
    cin>>columnInteger;
    switch(columnInteger){
        case (1): column=0; break;
        case (2): column=1; break;
        case (3): column=2; break;
        case (4): column=3; break;
        case (5): column=4; break;
        case (6): column=5; break;
        case (7): column=6; break;
        case (8): column=7; break;
        case (9): column=8; break;
        case (10): column=9; break;
        default:
        cout<<"invalid selection \n";
    }
    if(board[row][column] != 'X' && fleet[row][column] != 'S'){
        board[row][column] = '0';
        cout<<"MISS!\n";
        turns++;
    }else if(board[row][column] != 'X' && fleet[row][column] == 'S'){
        board[row][column] = 'X';
        cout<<"HIT!\n";
        hits++;
        turns++;
    }else if(board[row][column] == 'X'){
        cout<<"invalid selection \n";
    } 
}
//Have all the ships been sunk
void gameIsWon() {
    if(hits == 17){
        display_board();
        cout<<"WIN!! in \n"<<turns<<" turns\n";
        gameOn = false;
    }
}
//ships sunk
// void shipStruck(){

// }

int main() {
    cout<<"BattleShip \n";
      while(gameOn){
        display_board();
        cout<<turns<<"turns \n";
        selection();
        gameIsWon();
      }
    return 0;
}