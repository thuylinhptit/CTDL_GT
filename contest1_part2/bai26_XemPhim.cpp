#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n,s;
    cin>>s>>n;
    int a[n+1];
    vector<int> f(s+10,0);
    For(i,1,n) cin>>a[i];
    f[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=a[i];j--){
            if(f[j-a[i]]==1) f[j]=1;
        }
    }
    for(int i=s;i>=0;i--) if(f[i]){cout<<i;return;}
}
int main(){
    int test = 1;
    while(test--){
        Res();
    }
}
