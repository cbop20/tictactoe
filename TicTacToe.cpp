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

/**
 * Update the board at the given position with the provided marker
 */
void PlaceMarker(vector<int> pos, char marker, vector<vector<char>> &board){
    board[pos[0]][pos[1]] = marker;
  }
/**
 * Prompt player for position they would like to play
 */
vector<int> GetPlayerChoice(){
    int row;
    int col;
    bool good = false;
    while(!good){
        cout << "Enter your choice as a row col coordinates seperated by a space" << endl;
        cin >> row >> col;
        while(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Enter your choice as a row col coordinates seperated by a space" << endl;
            cin >> row >> col;
        }
        if((row<=3)&&(row>=1)&&(col<=3)&&col>=(1)){
            good = true;
        }
        else{
            cout << "Row and Col must be between 1 and 3" << endl;
        }
    }
    vector<int> ret = {row-1,col-1};
    return(ret);

}

int main(){
    vector<vector<char>> board = CreateBoard();

    DisplayBoard(board);
   
    return 0;
}
