// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

char space[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char symbol[2] = { 'X','0' };
int position;
bool tie = false;
string player[2];
int n = 0;
void board() {
    cout << "\t\t\t\t\t ______________________________________" << endl;
    cout << "\t\t\t\t\t|\t    TIC TAC TOE GAME           |" << endl;
    cout << "\t\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t\t|\t\t|\t" << "|\t       |" << endl;
    cout << "\t\t\t\t\t|\t    " << space[0][0] << "   |   " << space[0][1] << "   |   " << space[0][2] <<"          |"  << endl;
    cout << "\t\t\t\t\t|\t------------------------       |" << endl;
    cout << "\t\t\t\t\t|\t\t|\t" << "|\t       |" << endl;
    cout << "\t\t\t\t\t|\t    " << space[1][0] << "   |   " << space[1][1] << "   |   " << space[1][2] <<"          |"  << endl;
    cout << "\t\t\t\t\t|\t------------------------       |" << endl;
    cout << "\t\t\t\t\t|\t\t|\t" << "|\t       |" << endl;
    cout << "\t\t\t\t\t|\t    " << space[2][0] << "   |   " << space[2][1] << "   |   " << space[2][2] <<"          |" << endl;
    cout << "\t\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t\t|______________________________________|" << endl;
}

bool win(int n) {   //displays the winner
    cout << " Congrats," << player[n] << ". You Won!" << endl;
    exit(0);        //exiting the game after winning
    return true;
}
void check(int n) { //checks whether the game is a draw or a win
    for (int i = 0; i < 3; i++) {
        if ((space[i][0] == space[i][1] && space[i][0] == space[i][2]) || (space[0][i] == space[1][i] && space[0][i] == space[2][i])) {
            cout << "jhkhv\n";
            tie = false;
            win(n);
            break;
        }
    }
    if ((space[0][0] == space[1][1] && space[0][0] == space[2][2]) || (space[0][2] == space[1][1] && space[0][2] == space[2][0])) {
        tie = false;
        win(n);
    }
   for (int i = 0; i < 3; i++) {        //checking for empty spaces on the board
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'X' && space[i][j] != '0')
                return;  //if an empty space is found compiler goes back to the function call
            
                
           
        }
        
   }
   tie = true;          //if no empty space is found and there is no win then its a draw
   cout << "\nIt's a Draw." << endl;
   exit(0);         //exits code after displaying above message

}

void assigningValues(char s, int n) {       //placing the symbols 'X' or '0' in empty spaces if any
    if (position == 1 && space[0][0] != 'X' && space[0][0] != '0')
        space[0][0] = s;

    else if (position == 2 && space[0][1] != 'X' && space[0][1] != '0')
        space[0][1] = s;

    else if (position == 3 && space[0][2] != 'X' && space[0][2] != '0')
        space[0][2] = s;

    else if (position == 4 && space[1][0] != 'X' && space[1][0] != '0')
        space[1][0] = s;

    else if (position == 5 && space[1][1] != 'X' && space[1][1] != '0')
        space[1][1] = s;

    else if (position == 6 && space[1][2] != 'X' && space[1][2] != '0')
        space[1][2] = s;

    else if (position == 7 && space[2][0] != 'X' && space[2][0] != '0')
        space[2][0] = s;

    else if (position == 8 && space[2][1] != 'X' && space[2][1] != '0')
        space[2][1] = s;
    else if (position == 9 && space[2][2] != 'X' && space[2][2] != '0')
        space[2][2] = s;
    else {
        if (position < 1 || position>9) {
            cout << "Enter a number between 1-9\n" << endl;
            return;
        }
    }
    board();
    check(n);

}
void askPos() {     //asking the players for their choice
    cout << "Position number should from 1-9.\n" << endl;
    if (n == 0) {   // player1's turn
        cout << "\n " << player[n] << ", Enter Position number: ";
        cin >> position;
        assigningValues(symbol[n], n);
        n++;
        askPos();
    }
    if (n == 1) {       //player2's turn
        cout << "\n " << player[n] << ", Enter Position number: ";
        cin >> position;
        assigningValues(symbol[n], n);
        n--;
        askPos();

    }
}
int main()
{

    cout << "\n\t\t\t\t\t\t   Enter your Names: \n";
    cout << "\t\t\t\t\t\t   Player1: "; getline(cin, player[0]);
    cout << "\t\t\t\t\t\t   Player2: "; getline(cin, player[1]); 
    cout << endl << endl;
    cout << "\n\t\t\t\t\t\t    Welcome Players \n";
    cout << "\t\t\t\t\t ______________________________________" << endl;
    cout << "\t\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t\t  Player1: " << player[0] << ", is X.   \n";
    cout << "\t\t\t\t\t|                                      |" << endl;
    cout << "\t\t\t\t\t  Player2: " << player[1] << ", is 0.   " << endl;
    cout << "\t\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t\t|______________________________________|" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    board();
    askPos();       //game starts here
}

