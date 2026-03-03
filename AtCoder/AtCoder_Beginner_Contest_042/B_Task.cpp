#include <bits/stdc++.h> 
using namespace std; 

int main() {
    
    long long n, l; 
    cin >> n >> l; 
    
    vector<string> a(n); 
    
    for (long long i =0; i < n; i++)
    {
        cin >> a[i]; 
    }
    
    sort(a.begin(), a.end()); 
    
    for (long long i = 0; i < n;i++)
    {
        std::cout <<  a[i]; 
    }
}
