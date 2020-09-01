#include<bits/stdc++.h> 

#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    string s;
    cin>>s;
    stack<int> stk;
    For(i,0,s.length()){
        if(s[i] == 'D' ) stk.push(i+1);
        else{
            cout<<i+1;
            while(!stk.empty()){
                cout<<stk.top();
                stk.pop();
            }
        }
    }
    cout<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
