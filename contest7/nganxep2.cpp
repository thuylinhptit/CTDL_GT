#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;
void Res(){
    int n;
    cin>>n;
    string s;
    stack<int> stk;
    while(n--){
        cin>>s;
        if(s == "PUSH"){
            int x;
            cin>>x;
            stk.push(x);
        }
        else if(s == "POP"){
            if(!stk.empty()) stk.pop();
        }
        else{
            if(stk.empty()){
                cout<<"NONE\n";
            }
            else cout<<stk.top()<<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    while(test--){
        Res();
    }
}
