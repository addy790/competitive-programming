
/*
---------------------------------------------------------
Problem : Codeforces 1A - Theatre Square
Rating  : 800
Link    : https://codeforces.com/problemset/problem/1/A

Concepts
---------
- Mathematics
- Implementation

Time Complexity : O(1)
Space Complexity: O(1)

What I Learned
--------------
- Reading multiple test cases
- Mathematical calculations for grid coverage
---------------------------------------------------------
*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    using ll = long long;
    ll n, m, a;
    cin>>n>>m>>a;
    ll len = (n+a-1)/a;
    ll wid = (m+a-1)/a;
    ll ans = len*wid;
    cout<<ans<<endl;
    return 0;
}