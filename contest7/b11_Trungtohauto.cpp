#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int Calculation(char a){
    if(a == '^') return 3;
    if(a=='*' or a=='/') return 2;
    if(a=='+' or a=='-') return 1;
    return 0;
}

void Res(){
    string s;
    cin>>s;
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) cout<<s[i];
        else {
                if(s[i]=='(') stk.push(s[i]);
                else if(s[i]==')'){
                    while(!stk.empty() && stk.top()!='('){
                        cout<<stk.top();
                        stk.pop();
                    }
                    stk.pop();
                }
                else if(!stk.empty() && Calculation(stk.top())>=Calculation(s[i])){
                    while(!stk.empty() && Calculation(stk.top() ) >=Calculation(s[i])){
                        cout<<stk.top();
                        stk.pop();
                    }
                    stk.push(s[i]);
                }
                else stk.push(s[i]);
            } 
    }
    while(!stk.empty()){
        if(stk.top() != '(') cout<<stk.top();
        stk.pop();
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
