#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int Find(vector<ll> a,vector<ll> b,int l,int r){
    int m = (l+r)/2;
    if(a[m]>=b[m-1] && a[m]<b[m]) return m;
    if(a[m]==b[m]&&a[r]!=b[r]) return Find(a,b,m,r);
    if(a[m]!=b[m]&&a[r]!=b[r]) return Find(a,b,l,m);
}

void Res(){
    int n;
    cin>>n;
    vector<ll> a,b;
    a.push_back(-1);b.push_back(-1);
    For(i,1,n){ll x;cin>>x;a.push_back(x);}
    For(i,1,n-1){ll x;cin>>x;b.push_back(x);}
    if(a[1]!=b[1]){
        cout<<1<<'\n';
        return;
    }
    if(a[n-1]==b[n-1]){
        cout<<n<<endl;
        return;
    }
    cout<<Find(a,b,1,n-1)<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
