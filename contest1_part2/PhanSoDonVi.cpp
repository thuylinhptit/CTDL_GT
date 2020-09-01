#include <bits/stdc++.h>
#define ll long long 
using namespace std; 
  
void printx(ll n, ll d) 
{ 
    if (d == 0 || n == 0) 
        return; 
    if (d%n == 0) 
    { 
        cout << "1/" << d/n; 
        return; 
    } 
  
    if (n%d == 0) 
    { 
        cout << n/d; 
        return; 
    } 
    if (n > d) 
    { 
        cout << n/d << " + "; 
        printx(n%d, d); 
        return; 
    } 
    ll t = d/n + 1; 
    cout << "1/" << n << " + "; 
    printx(n*t-d, d*t); 
 } 

int main() 
{ 
    ll t;
    cin>>t;
    ll n,d;
    while( t-- ){
    	cin>>n>>d;
    	printx(n,d);
    	cout<<endl;
	}
    return 0; 
}
