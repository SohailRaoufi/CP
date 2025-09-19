#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define LOCAL // comment for submit time

void search(int k, int n, vector<int>& subset) {
    if(k == n) {
        for(auto a: subset) cout << a << " ";
        cout << "\n";
    } else {
        search(k + 1, n, subset);
        subset.push_back(k);
        search(k + 1, n, subset);
        subset.pop_back();
    }
}

int main() {
    #ifdef LOCAL
        (void)freopen("input.txt", "r", stdin);
        (void)freopen("output.txt", "w", stdout);
    #endif

    int k = 0;
    int n = 3;
    vector<int> subset;
    search(k, n, subset);
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}