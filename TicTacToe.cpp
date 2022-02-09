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

void DisplayBoard(vector<vector<char>> b ){
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            cout<<'|' << b[i][j] << '|';
        }
        cout << endl;
    }
}

int main(){
    vector<vector<char>> board = CreateBoard();
    DisplayBoard(board);
}
