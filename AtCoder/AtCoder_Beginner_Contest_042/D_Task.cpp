#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

ll modpow(ll a, ll b){
    ll r = 1;
    while(b){
        if(b&1) r = r*a%MOD;
        a = a*a%MOD;
        b >>= 1;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H,W,A,B;
    cin >> H >> W >> A >> B;

    int MAX = H + W + 5;

    vector<ll> fact(MAX), invfact(MAX);

    fact[0]=1;
    for(int i=1;i<MAX;i++)
        fact[i]=fact[i-1]*i%MOD;

    invfact[MAX-1]=modpow(fact[MAX-1],MOD-2);
    for(int i=MAX-2;i>=0;i--)
        invfact[i]=invfact[i+1]*(i+1)%MOD;

    auto C = [&](int n,int k){
        if(k<0||k>n) return 0LL;
        return fact[n]*invfact[k]%MOD*invfact[n-k]%MOD;
    };

    ll ans = 0;

    for(int i=B;i<=W-1;i++){
        ll ways1 = C((H-A-1)+i, H-A-1);
        ll ways2 = C((A-1)+(W-1-i), A-1);
        ans = (ans + ways1*ways2)%MOD;
    }

    cout << ans << "\n";
}
