#include<bits/stdc++.h> 
#define ll long long

using namespace std;

ll cal(char c, ll a, ll b){
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
}
void Sum(){
    int n;
    cin>>n;
    ll a[100];
    queue<ll> q;
    stack<char> s;
    for( int i=1; i<=n/2; i++ ) {
        char x; 
		cin>>x;
        s.push(x);
    }
    for( int i=1; i<= n/2+1 ; i++ ) cin>>a[i];
    for(int i=n/2+1 ; i>=1 ; i--) q.push(a[i]);
    while(!q.empty()){
        ll q1 = q.front(); q.pop();
        ll q2 = q.front(); q.pop();
        char op = s.top(); q.pop();
        if(q.empty()){
            cout<<cal(op,q2,q1)<<'\n';
            return;
        }
        q.push(cal(op,q2,q1));
    }


}
int main(){
   
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
