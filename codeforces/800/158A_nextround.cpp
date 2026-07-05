

/*
---------------------------------------------------------
Problem : Codeforces 71A - Way Too Long Words
Rating  : 800
Link    : https://codeforces.com/problemset/problem/71/A

Concepts
---------
- Strings
- Implementation

Time Complexity : O(n × L)
Space Complexity: O(1)

What I Learned
--------------
- Reading multiple test cases
- String length using size()
- Accessing first and last character
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