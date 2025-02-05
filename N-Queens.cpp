#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<int> &queens, int n, int r, int c) {
    for(int i = 0; i<n; i++) {
        if(queens[i] != -1){
            int qc = i;
            int qr = queens[i];

            if(qr == r || abs(qr - r) == abs(qc - c)) return false;
        }
    }
    return true;
}

void helper(vector<string> &board, vector<vector<string>> &ans, vector<int> &queens, int n, int c) {
    if(c == n) {
        ans.push_back(board);
        return;
    }

    for(int i = 0; i<n; i++) {
        if(isSafe(queens, n, i, c)) {
            board[i][c] = 'Q';
            queens[c] = i;

            helper(board, ans, queens, n, c+1);
            queens[c] = -1;
            board[i][c] = '.';
        }

    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<int> queens(n+1, -1);
    vector<string> board;

    string s;
    
    for(int i = 0; i<n; i++) s += ".";

    board.assign(n, s);

    helper(board, ans, queens, n, 0);

    return ans;
}

void printBoard(vector<vector<string>> a) {
    for(int i = 0; i<a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " " << endl;
        }
        cout << endl << endl;
    }
}

int main() {

    vector<vector<string>> a = solveNQueens(4);

    printBoard(a);

    return 0;
}