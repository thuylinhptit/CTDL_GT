#include<bits/stdc++.h> 
#define ll long long

using namespace std;

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    for( int i=1; i<=n ; i++ ) cin>>a[i-1];
    sort(a,a+n);
    cout<<a[(n-1)/2]<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
