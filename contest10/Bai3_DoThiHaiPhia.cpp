#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int n,m,NotOk;
int mark[1005];

void DFS(int u,vector<int> v[],vector<int> &vs){
    if(NotOk) return;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0){
            mark[x] = u;
            DFS(x,v,vs);    
        }
        else if(vs[x]==1 && mark[u]!=x){
            NotOk = 1;
            return;
        }
    }
}

void Res(){
    cin>>n>>m;
    vector<int> v[1234];
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int> vs(10005,0);
    memset(mark,0,sizeof(mark));
    For(i,1,n){
        if(vs[i]==0){
            NotOk = 0;
            DFS(i,v,vs);
            if(NotOk){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
