

/*
---------------------------------------------------------
Problem : Codeforces 858A - k-rounding
Rating  : 800
Link    : https://codeforces.com/problemset/problem/858/A

Concepts
---------
- Number Theory
- Prime Factorization
- Trailing Zeros

Pattern
-------
- Mathematical Observation
- Greedy Construction

Time Complexity : O(log n)
Space Complexity: O(1)

What I Learned
--------------
- Trailing zeros are formed by pairs of prime factors (2, 5)
- Counted factors of 2 and 5 using repeated division
- Constructed the minimum multiplier to obtain at least k trailing zeros
- Solved a number theory problem using mathematical observation instead of brute force
---------------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    using ll = long long;
    ll n,k;
    cin>>n>>k;
    int cnt2 = 0;
    int cnt5 = 0;
    ll og = n;
    while(n%2==0){
        cnt2++;
        n/=2;
    }
    while(n%5==0){
        cnt5++;
        n/=5;
    }
    while(cnt2<k){
        cnt2++;
        og*=2;
    }
    while(cnt5<k){
        cnt5++;
        og*=5;
    }
    cout<<og<<endl;
}