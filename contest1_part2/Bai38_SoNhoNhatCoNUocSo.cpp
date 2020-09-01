#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int snt[]={-1,2,3,5,7,11,13,17,19,23,29};
int n,solan[100];
ll ans;

void Try(int k,int t){
    if(t==n){
        ll res=1;
        For(i,1,k-1) res*=pow(snt[i],solan[i]);
        if(res>0) ans=min(ans,res);
    }
    else{
        for(int i=1;i<=n;i++){
            if(t*(i+1)<=n){
                solan[k]=i;
                Try(k+1,t*(i+1));
            }
            else break;
        }
    }
}

void Res(){
    cin>>n;  
    ans=LLONG_MAX;  
    Try(1,1);
    cout<<ans<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
