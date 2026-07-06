

/*
---------------------------------------------------------
Problem : Codeforces 546A - Soldier and Bananas
Rating  : 800
Link    : https://codeforces.com/problemset/problem/546/A

Concepts
---------
- Implementation
- Arithmetic Progression (Sum of First N Natural Numbers)

Time Complexity : O(1)
Space Complexity: O(1)

What I Learned
--------------
- Recognized an arithmetic progression
- Replaced iterative summation with the formula:
  n * (n + 1) / 2
- Looked for mathematical optimizations instead of
using loops when applicable
---------------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int ans = k*(w*(w+1))/2;
    if(ans>n){
        cout<<ans-n;
    }
    else{
        cout<<0;
    }
}