
/*
---------------------------------------------------------
Problem : Codeforces 791A - Bear and Big Brother
Rating  : 800
Link    : https://codeforces.com/problemset/problem/791/A

Concepts
---------
- Simulation
- Loops

Pattern
-------
- Simulation
- Repeated State Update

Time Complexity : O(years)
Space Complexity: O(1)

What I Learned
--------------
- Simulating changes over time using a while loop
- Deriving the loop condition from the stopping condition
- Updating multiple variables simultaneously in each iteration
---------------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int years = 0;
    while(a<=b){
        a *= 3;
        b*= 2;
        years++;
    }
    cout<<years<<endl;
}