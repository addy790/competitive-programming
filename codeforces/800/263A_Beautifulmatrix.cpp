

/*
---------------------------------------------------------
Problem : Codeforces 263A - Beautiful Matrix
Rating  : 800
Link    : https://codeforces.com/problemset/problem/263/A

Concepts
---------
- Matrices
- Implementation

Time Complexity : O(1) because runs exactly 25 times which is O(25)~O(1)
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
    int row = 0;
    int col = 0;
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            int x;
            cin>>x;
            if(x==1){
                row = i;
                col = j;
            }

        }
    }

    cout<<abs(row-3)+abs(col-3)<<endl;
}