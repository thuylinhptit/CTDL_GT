#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;


int a[1005][1005],n,m,x,y;

int HasCycle(int x,vector<int> v[],vector<int> &vs){
    memset(a,0,sizeof(a));
    vector<int> mark(n+1,0);
    queue<int> q;
    q.push(x);
    vs[x] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++) {
            if(vs[v[u][i]]==0){
                q.push(v[u][i]);
                vs[v[u][i]] = 1;
                mark[v[u][i]] = u;
            }
            else if(mark[u] != v[u][i]) return 1;
        }
    }
    return 0;
}

void Res(){
    cin>>n>>m;
    vector<int> v[10005];
    vector<int> vs(10005,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
   }
    For(i,1,n){
        if(vs[i]==0 && HasCycle(i,v,vs)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        
    }
}
