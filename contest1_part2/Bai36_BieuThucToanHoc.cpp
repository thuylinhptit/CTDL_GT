#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int n,a[10],b[10],kt;
void Try(int j,ll s){
    if(j==6){
        if(s==23) kt=1;
        return;
    }
    if(kt==0) {if(j==1) s=1;Try(j+1,s*a[j]);if(j==1) s=0;}
    if(kt==0) Try(j+1,s+a[j]);
    if(kt==0) Try(j+1,s-a[j]);
    return;
}
int vs[30]={0};
void Hv(int i){
    for(int j=1;j<=5;j++){
        if(vs[j]==0){
            vs[j]=1;
            a[i]=b[j];
            if(i==5){
                Try(1,0);
            }
            else Hv(i+1);
            vs[j]=0;
        }
    }
}
void Res(){
    kt=0;
    For(i,1,5) cin>>b[i];
    Hv(1);
    if(kt) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
