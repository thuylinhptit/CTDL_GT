#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

int a[1005][1005],n,m,x,y;

int HasCycle(int x,vector<int> v[],vector<int> &vs){
    memset(a,0,sizeof(a));
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
            }
            else if(x == v[u][i]) return 1;
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
   }
    For(i,1,n){
        vector<int> vs(10005,0);
        if(HasCycle(i,v,vs)){
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
