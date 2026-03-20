/*
    printHelloWorld
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int,int>;

#define SQ(a) (a) * (a) 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define REP(i,n) for (int i = 0; i < (n); i++)
#define RFOR(i,a,b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define $HelloWorld$ ios::sync_with_stdio(false); cin.tie(nullptr); 

long long helloworld(ll n) 
{
	ll sum = 0; 
	
	while (n != 0) 
	{
		sum += SQ(n % 10); 
		n /= 10; 
	} 

	return sum; 
} 

void solve() 
{
	ll n; 
	cin >> n; 	

	while (true) 
	{
		if (n == 1) 
		{
			cout << "Yes\n"; 
			return; 
		} 
		
		if (n == 37) 
		{
			cout << "No\n"; 
			return; 
		}
	       	
		n = helloworld(n); 	
	} 

	cout << "No\n"; 
} 

signed main() 
{
    	$HelloWorld$ 
    	
	solve(); 

	return (0);
}
