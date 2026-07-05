

/*
---------------------------------------------------------
Problem : Codeforces 4A - Watermelon
Rating  : 800
Link    : https://codeforces.com/problemset/problem/4/A

Concepts
---------
- Mathematics
- Implementation

Time Complexity : O(1)
Space Complexity: O(1)

What I Learned
--------------
- Reading multiple test cases
- Mathematical calculations for even/odd numbers
---------------------------------------------------------
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin>>w;
    if(w%2==0 && w>2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}