#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> CreateBoard(){
   vector<vector<int>> board{{0,0,0},{0,0,0},{0,0,0}};
   return board; 
}

int main(){
    vector<vector<int>> board = CreateBoard();
}