#include <iostream>
#include <vector>
using namespace std;

/**
* Initialize empty matrix for new game
*/
vector<vector<char>> CreateBoard(){
   vector<vector<char>> board{{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
   return board; 
}

/**
 *  Display the 3x3 matrix
 */
void DisplayBoard(vector<vector<char>> &board){
    cout << "---1---2---3--" << endl;
    for(int i = 0; i < board.size(); i++){
        cout << i+1 <<"| ";
        for(int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << " -------------" << endl;
    }
}

int main(){
    vector<vector<char>> board = CreateBoard();

    DisplayBoard(board);
   
    return 0;
}
