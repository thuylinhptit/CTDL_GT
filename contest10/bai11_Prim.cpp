#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int n,m,ans;
int vs[105];

void Res(){
    ans = 0;
    vector<pair<int,int > > v[1005];
    memset(vs,0,sizeof(vs));
    cin>>n>>m;
    For(i,1,m){
        int x,y,w;
        cin>>x>>y>>w;
        v[x].push_back({y,w});
        v[y].push_back({x,w});
    }
    priority_queue<pair<int,int > > q;
    vs[1] = 1;
    q.push({1,0});
    while(!q.empty()){
        
    }    

    cout<<ans<<'\n';
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
