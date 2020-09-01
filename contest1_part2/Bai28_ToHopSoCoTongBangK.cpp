#include<bits/stdc++.h> 
#define ll long long
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int n,s,a[105],b[105],kt;
void out(ll k){
    cout<<"[";
    for(ll i=1;i<k;i++) cout<<b[i]<<" ";
    cout<<b[k]<<"] ";
}
void Try(ll i,ll sum,ll k){
    if(sum==s){
        kt=1;
        out(k-1);return;
    }
    else{
        for(ll j=i;j<=n;j++){
            b[k]=a[j];
            if(sum+a[j]<=s) {
                Try(j,sum+a[j],k+1);
            }
        }
    }
}

void Res(){
    kt=0;
    cin>>n>>s;
    for( ll i=1; i<=n ; i++ ) cin>>a[i];
    sort(a+1,a+1+n);
    Try(1,0,1);
    if(kt==0) cout<<-1;
    cout<<endl;
}
int main(){
    IOS;
    ll test;
    cin>>test;
    while(test--){
        Res();
    }
}
