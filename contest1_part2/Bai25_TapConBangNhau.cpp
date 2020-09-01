#include<bits/stdc++.h> 
#define ll long long
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int n,a[105];
void Res(){
    cin>>n;
    int s=0;
    for( int i=1; i<=n ;i++ ) {cin>>a[i];s+=a[i];}
    if(s%2!=0) cout<<"NO";
    else {
        s/=2;
        int f[s+10]={0};
        f[0]=1;
        for( int i=1; i<=n ;i++ ){
            for(int j=s;j>=i;j--){
                if(f[j-a[i]]==1) f[j]=1;
            }
        }
        if(f[s]) cout<<"YES";
        else cout<<"NO"; 
    }
    cout<<"\n";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
