#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    string s;
    getline(cin,s);
    stack<char> stk;
    for(int i=0;i<=s.length();i++){
        if(s[i] == ' ' || s[i]=='\0'){
                while(!stk.empty()){
                    cout<<stk.top();
                    stk.pop();
                }
                cout<<" ";
        }
        else  stk.push(s[i]);
    }
    cout<<endl;
}
int main(){
    int test = 1;
    cin>>test;
    cin.ignore();
    while(test--){
        Res();
    }
}
