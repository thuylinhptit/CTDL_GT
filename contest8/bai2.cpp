#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    string s;
    queue<int> q;
    while(n--){
        cin>>s;
        if(s=="PUSH"){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(s=="POP"){
            if(!q.empty()) q.pop();
        }
        else{
            if(q.empty()) cout<<"NONE\n";
            else cout<<q.front()<<endl;
        }
    }
}
int main(){
    int test = 1;
    while(test--){
        Res();
    }
}
