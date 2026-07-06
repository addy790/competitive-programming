

/*
---------------------------------------------------------
Problem : Codeforces 617A - Elephant
Rating  : 800
Link    : https://codeforces.com/problemset/problem/617/A

Concepts
---------
- Math
- Ceiling Division

Pattern
-------
- Greedy Observation
- Ceiling Division

Time Complexity : O(1)
Space Complexity: O(1)

What I Learned
--------------
- Identified when ceiling division can be used
- Reused a previously learned pattern (Theatre Square)
- Solved a greedy problem using a mathematical observation
---------------------------------------------------------
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int ans = (x + 5 - 1) / 5;
    cout << ans;
}