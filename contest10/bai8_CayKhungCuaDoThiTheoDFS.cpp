#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

vector<int> v[100005];
vector < pair < int , int > > path;
int vs[100005];
int n,m,ok,start,k;

void DFS(int u){
    if(k==n) ok = 1;
    if(ok) return;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0) {
            k++;
            path.push_back({u,x});
            DFS(x);
        }
    }   
}

void Res(){
    memset(vs,0,sizeof(vs));
    cin>>n>>m>>start;
    For(i,1,n) v[i].clear();
    path.clear();
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ok = 0;
    k = 1;
    DFS(start);
    if(ok){
        For(i,0,n-2) cout<<path[i].first<<" "<<path[i].second<<'\n';
    }
    else cout<<"-1\n";

}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
