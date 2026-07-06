
/*
---------------------------------------------------------
Problem : Codeforces 467A - George and Accommodation
Rating  : 800
Link    : https://codeforces.com/problemset/problem/467/A

Concepts
---------
- implementation

Time Complexity : O(n)
Space Complexity: O(1)

What I Learned
--------------
- reasoning about conditions and counting based on themS
---------------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(q - p >= 2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}