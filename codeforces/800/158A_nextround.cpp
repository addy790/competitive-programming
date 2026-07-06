

/*
---------------------------------------------------------
Problem : Codeforces 158A - Next Round
Rating  : 800
Link    : https://codeforces.com/problemset/problem/158/A

Concepts
---------
- Arrays
- Implementation

Time Complexity : O(n)
Space Complexity: O(n)

What I Learned
--------------
- Reading multiple test cases
- Accessing array elements by index
---------------------------------------------------------
*/




#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]>=a[k-1] && a[j]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}