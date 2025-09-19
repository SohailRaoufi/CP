#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define LOCAL // comment for submit time

void findPerm(int n, vector<int>& perm, vector<bool>& chosen) {
    if((int)perm.size() == n) {
        for(auto a: perm) cout << a << " ";
        cout << "\n";
    } else {
        REP(i, 0, n - 1) {
            if(chosen[i]) continue;
            chosen[i] = true;
            perm.push_back(i);
            findPerm(n, perm, chosen);
            chosen[i] = false;
            perm.pop_back();
        }
    }
}

void stdWay(int n) {
    vector<int> perm;
    REP(i, 0, n - 1) perm.push_back(i);
    do {
        for(auto x: perm) cout << x << " ";
        cout << "\n";
    } while(next_permutation(perm.begin(), perm.end()));
}

int main() {
    #ifdef LOCAL
        (void)freopen("input.txt", "r", stdin);
        (void)freopen("output.txt", "w", stdout);
    #endif    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 3;
    vector<int> perm;
    vector<bool> chosen(n, false);
    // findPerm(n, perm, chosen);
    stdWay(n);
    return 0;
}