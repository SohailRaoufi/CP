#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
// #define LOCAL // comment for submit time


void backtrack(int r, int& n, vector<int>& cols, vector<int>& posDiag, vector<int>& negDiag, vector<vector<string>>& res, vector<string>& board) {
    if(r == n) {
        res.push_back(board);
        return;
    }

    REP(i, 0, n -1) {
        if(cols[i] == 1 || posDiag[r + i] == 1 || negDiag[r - i + n -1] == 1) continue;

        cols[i] = 1;
        posDiag[r + i] = 1;
        negDiag[r - i + n -1] = 1;
        board[r][i] = 'Q';

        backtrack(r + 1, n, cols, posDiag, negDiag, res, board);


        cols[i] = 0;
        posDiag[r + i] = 0;
        negDiag[r - i + n - 1] = 0;
        board[r][i] = '.';
    }
}

void solve(int n) {
    vector<int> cols(n , 0);
    vector<int> posDiag(2 * n - 1, 0);
    vector<int> negDiag(2 * n - 1, 0);

    vector<vector<string>> res;
    vector<string> board(n, string(n , '.'));

    backtrack(0, n, cols, posDiag, negDiag, res, board);
    for (auto solution : res) {
        for (auto row : solution) cout << row << "\n";
        cout << "----\n";
    }
}

int main() {
    #ifdef LOCAL
        (void)freopen("input.txt", "r", stdin);
        (void)freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4;
    solve(n);
    return 0;
}