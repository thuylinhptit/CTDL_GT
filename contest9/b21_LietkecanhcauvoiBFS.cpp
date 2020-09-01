#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;


int n,m,x,y;

void dfs(int u,int t,int s,vector<int> v[],vector<int> &vs){
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if((u==t && v[u][i]==s) || (u==s && v[u][i]==t)) continue;
        if(vs[v[u][i]]==0){
            dfs(v[u][i],t,s,v,vs);
        }
    }
}

int Canh_Cau(int u,int x,vector<int> v[]){
    vector<int> vs(n+5,0);
    int d = 0;
    For(i,1,n){
        if(vs[i]==0){
            d++;
            if(d==2) return 1;
            dfs(i,u,x,v,vs);
        }        
    }
    return 0;
}

void Res(){
    cin>>n>>m;
    vector<int> v[10005];
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        for(int j=0;j<v[i].size();j++){
            if(i<v[i][j] && Canh_Cau(i,v[i][j],v) ){ 
                cout<<i<<" "<<v[i][j]<<" ";
            }
        }
    }
    cout<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        
    }
}
