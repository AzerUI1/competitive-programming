#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,w;
    cin>>n>>w;
    
    ll a[n];
    
    vector<ll>v(2 * w, 0);
    
    
    for(int i = 0; i < n; i++){
        cin>>a[i];
        
        v[i % (2 * w)] += a[i];
    }
    
    for(int i = 0; i < 2 * w; i++){
        v.push_back(v[i]);
    }
    
    
    
    ll mini = 1e18;
    ll now = 0;
    
    
    for(int i = 0; i < w; i ++){
        now += v[i];
    }
    
    mini = min(now , mini);
    
    
    for(int i = w; i < 4 * w ; i++){
        now += v[i];
        now -= v[i - w];
        
        mini = min(mini , now);
    }
    
    
    cout<<mini<<endl;
    
}

int main() {
    ll p;
    cin>>p;

    while(p--){
        solve();
    }
    
}
