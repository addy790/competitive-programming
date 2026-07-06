


/*
---------------------------------------------------------
Problem : Codeforces 339A - Helpful Maths
Rating  : 800
Link    : https://codeforces.com/problemset/problem/339/A

Concepts
---------
- Strings
- Sorting
- STL sort()
- Character manipulation

Time Complexity : O(n log n)
Space Complexity: O(n)

What I Learned
--------------
- Difference between char and string
- Sorting characters using std::sort
- Extracting relevant characters from a formatted string
---------------------------------------------------------
*/



#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(int i = 0;i<s.size();i+=2){
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int  i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
}