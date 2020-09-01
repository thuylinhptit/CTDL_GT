#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
string x;
void input(){
    cin >> x;
}
void solve(){
    int i = x.length() - 1;
    while(x[i] == '1' && i >= 0){
        x[i] = '0';
        i--;
    }
    if ( i == -1){
        for(int i = 0 ; i < x.length() ; i++)
            cout << 0;
       
        return;
    }
    else x[i] = '1';
    cout << x ;
}
int main(){
    int t=1; 
	cin>>t;
    while(t--){ 
		input();
		solve();
		cout<<endl;
	}
    return 0;
}

