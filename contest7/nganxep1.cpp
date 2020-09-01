#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    string s;
    stack<int> stk;
    while(cin>>s){
        if(s == "push"){
            int x;
            cin>>x;
            stk.push(x);
        }
        else if(s == "pop"){
            if(!stk.empty()) stk.pop();
        }
        else{
            if(stk.empty()){
                cout<<"empty\n";
                continue;
            }
            stack<int> tmp = stk;
            vector<int> v;
            while(!tmp.empty()){
                v.push_back(tmp.top());
                tmp.pop();
            }
            for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
int main(){
    int test = 1;
   // cin>>test;
    while(test--){
        Res();
    }
}
