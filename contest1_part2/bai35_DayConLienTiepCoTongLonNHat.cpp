#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n,m=INT_MIN;
    cin>>n;
    int a[n+2];
    For(i,1,n) {
		cin>>a[i];
		m=max(m,a[i]);
	}
    if(m<=0) cout<<m<<'\n';
    else{
        int s=0,ans=0;
        For(i,1,n){
            s+=a[i];
            if(s<0) s=0;
            else ans = max(s,ans);
        }
        cout<<ans<<"\n";
    }
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
