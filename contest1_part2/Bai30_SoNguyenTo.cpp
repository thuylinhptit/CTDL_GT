#include<bits/stdc++.h> 
#define ll long long
using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)

ll n,p,s,k,visited[100]={0},d;
vector<ll> prime;
vector<ll> ans;
void Try(ll i,ll sum){
    if(sum==s) {
        int count=0;
        For(x,0,n-1) if(visited[x]) count++;
        if(count==k){
            d++;
            For(x,0,n-1) if(visited[x]) ans.push_back(prime[x]);
        }
    }
    else{
        for(ll j=i;j<n;j++){
            if(visited[j]==0){
                visited[j]=1;
                if(sum+prime[j]<=s) Try(j+1,sum+prime[j]);
                visited[j]=0;
            }
        }
    }
}

void Res(){
    d=0;
    vector<ll> a(300,0);
    cin>>k>>p>>s;
    For(i,2,300){
        if(a[i]==0){
            for(ll j=i*2;j<=300;j+=i) a[j]=1;
            if(i>=p&&i<=s) {prime.push_back(i);}
        }
    }
    n=prime.size();
    Try(0,0);
    cout<<d<<endl;
    int x=0;
    for(ll i=1;i<=d;i++){
        for(ll j=x;j<k+x;j++){
            cout<<ans[j]<<" ";
        }
        x+=k;
        cout<<"\n";
    }
    prime.clear();
    ans.clear();
}
int main(){
    ll test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
