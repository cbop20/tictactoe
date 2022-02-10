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
void DisplayBoard(vector<vector<char>> board){
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

vector<int> GetPlayerChoice(){
    int x;
    int y;
    bool good = false;
    while(good == false){
        cout << "Enter your choice as a x y coordinates seperated by a space" << endl;
        cin >> x >> y;
        while(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Enter your choice as a x y coordinates seperated by a space" << endl;
            cin >> x >> y;
        }
        if((x<=3)&&(x>=1)&&(y<=3)&&y<=(1)){
            good = true;
        }
        else{
            cout << "X and Y must be between 1 and 3" << endl;
        }
    }
    vector<int> ret = {x-1,y-1};
    return(ret);

}

int main(){
    vector<vector<char>> board = CreateBoard();
    DisplayBoard(board);
    vector<int> pos = GetPlayerChoice();
    cout << pos[0] << pos[1];
    return 0;
}
