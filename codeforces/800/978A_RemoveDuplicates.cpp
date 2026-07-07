#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> s;
    vector<int> result;
    for(int i=n-1;i>=0;i--){
        if(s.find(a[i])==s.end()){
            s.insert(a[i]);
            result.push_back(a[i]);
        }
    }
    reverse(result.begin(), result.end());
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}