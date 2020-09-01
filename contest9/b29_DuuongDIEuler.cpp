#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

vector<int> v[10005];
int n,m,x,y;

int check(int d){
    if(d==0) return 2;
    if(d==2) return 1;
    return 0;    
}

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int d = 0;
    For(i,1,n) if(v[i].size()&1) d++;
    cout<<check(d)<<'\n';
    For(i,1,n) v[i].clear();
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
