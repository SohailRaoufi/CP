#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
// #define LOCAL // comment for submit time

int main() {
    #ifdef LOCAL
        (void)freopen("input.txt", "r", stdin);
        (void)freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s = {1 , 2 ,3};
    set<int> b = {2, 5, 1};
    set<int> c;

    set_difference(s.begin(), s.end(), b.begin(), b.end(), inserter(c, c.begin()));
    set_union(s.begin(), s.end(), b.begin(), b.end(), inserter(c, c.begin()));
    set_intersection(s.begin(), s.end(), b.begin(), b.end(), inserter(c, c.begin()));

    for(auto x: c) {
        cout << x << " ";
    }
    return 0;
}