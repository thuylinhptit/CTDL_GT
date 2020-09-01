#include <bits/stdc++.h> 
#define ll long long

using namespace std; 
  
int main() 
{ 
    ll t; 
	cin >> t;
    while(t--){
        int S ,N,M;
        cin >> N >> S >> M;
        if (((N * 6) < (M * 7) && S > 6) || M > N) 
        cout << "-1"<<endl; 
    	else { 
        	int days = (M * S) / N; 
        	if (((M * S) % N) != 0) days++; 
        	cout << days << endl; 
    	}
    }
    return 0;
} 
