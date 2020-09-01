#include<bits/stdc++.h> 
#define For(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
using namespace std;

int m =1e9+7;
ll ex(int n,int k){
    if(k==0) return 1;
    ll s=ex(n,k/2);
    if(k&1) return (s*s%m)*n%m;
    else return s*s%m;
}

void Res(){
    int n,k;
    cin>>n>>k;
    cout<<ex(n,k)<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
