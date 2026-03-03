#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    if(v[0]==5 and v[1]==5 and v[2]==7){
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
        return 0;
    }
}
