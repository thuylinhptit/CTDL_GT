#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n,x;
    cin>>n>>x;
    stack<pair<int,int> > stk;
    stk.push(make_pair(x,1));
    vector<int> a(n+1,-1);
    For(i,2,n){
        cin>>x;
        if(!stk.empty() && x>stk.top().first){
            while(!stk.empty() && x>stk.top().first){
                a[stk.top().second] = x;
                stk.pop();
            }
            stk.push(make_pair(x,i));
        }
        else stk.push(make_pair(x,i));
    }
    For(i,1,n) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
