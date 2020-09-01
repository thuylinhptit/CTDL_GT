#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[10005];
    vector<pair<int,int> > p(n+1,{0,0});
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        p[x].first++;
        p[y].second++;
    }
    For(i,1,n){
        if(p[i].first != p[i].second){
            cout<<"0\n";
            return;
        }
    }
    cout<<"1\n";
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
