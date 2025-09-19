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

    bitset<4> s(string("1010"));
    bitset<4> b(string("0011"));

    cout<< "And Op: " << (s&b) << "\n";
    cout<< "Or Op: " << (s|b) << "\n";
    cout<< "Xor Op: " << (s^b) << "\n";

    return 0;
}