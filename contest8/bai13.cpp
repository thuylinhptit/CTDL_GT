#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int check(int a){
    vector<int> v(10,0);
    while(a){
        if(v[a%10]) return 0;
        v[a%10] = 1;
        a/=10;
    }
    return 1;
}

int Count(int a,int b){
    queue<int> q;
    For(i,1,5) q.push(i);
    int ans = 0;
    map<int,int> mp;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        if(t>=a && t<=b) ans++;
        For(i,0,5){
            if(t*10+i<=b && check(t*10+i)) q.push(t*10+i);
        }
    }
    return ans;
}

void Res(){
    int s,r;
    cin>>s>>r;
    cout<<Count(s,r)<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
