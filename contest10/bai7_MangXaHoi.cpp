#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

vector<int> v[100005];
int vs[100005];
int n,m,ok;

int Perfect(vector<int> pf){
    int k = pf.size();
    for(int i=0;i<k;i++){
        if(v[pf[i]].size() != k-1) return 0;
    }
    return 1;
}

void DFS(int u,vector<int> &pf){
    vs[u] = 1;
    pf.push_back(u);
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0) DFS(x,pf);
    }    
}

void Res(){
    memset(vs,0,sizeof(vs));
    cin>>n>>m;
    For(i,1,n) v[i].clear();
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        if(vs[i]==0){
            vector<int> pf;
            DFS(i,pf);
            if(Perfect(pf)==0){
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
