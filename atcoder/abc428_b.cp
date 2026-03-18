#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    map<string , ll>m;
    
    string t = s.substr(0,k);
    
    m[t]++;
    

    ll maks = 1;
    
    for(int i = k; i < n; i++){
        t = t + s[i]; // ovow 
       
        t.erase(t.begin());// O n 
       
        m[t]++;
        
        maks = max(maks , m[t]); // 2 
    }
    
    cout<<maks<<endl;
    
    for(pair<string,ll>p : m){
        if(p.second == maks){
            cout<<p.first<<" ";
        }
    }
    
    
    
}
