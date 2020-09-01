#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int N,M,m,color[20],ok;

int Paint(int u,vector<int> v[],int c){
    for(int i=0;i<v[u].size();i++){
        if(c==color[v[u][i]]) return 0;
    }
    return 1;
}

int Start(int u,vector<int> v[]){
    if(u == N+1) ok = 1;
    if(ok) return 1;
    for(int i=1;i<=m;i++){
        if(Paint(u,v,i)){
            color[u] = i;
            Start(u+1,v);
        }
    }
    return 0;
}

void Res(){
    vector<int> v[20];
    memset(color,0,sizeof(color));
    cin>>N>>M>>m;
    int x,y;
    For(i,1,M){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ok = 0;
    Start(1,v);
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
