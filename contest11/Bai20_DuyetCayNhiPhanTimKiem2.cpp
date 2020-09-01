#include<bits/stdc++.h> 
#define ll long long

using namespace std;

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    for( int i=1; i<=n ; i++ ) cin>>a[i];
    for( int i=1; i<=n-1; i++ ){
        if(a[i] >= a[i+1]) {
			cout<<"0\n";
			return;
		}
    }    
    cout<<"1\n";
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
