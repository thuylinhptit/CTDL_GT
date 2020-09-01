#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int Priority(string a){
    if(a=="*" or a=="/") return 2;
    if(a=="+" or a=="-") return 1;
    return 0;
}

int toInt(string s){
    int t = 0;
    For(i,0,s.length()-1)  t = t*10 + (s[i]-'0');
    return t;
}

vector<string> toPosfix(string s){
    stack<string> stk;
    vector<string> ans;
    int i=0;
    while(s[i]!='\0'){
        string t = "";
        t = t + s[i];
        if(s[i]=='(') stk.push("(");
        else if(s[i]>='0' && s[i]<='9'){
            string tmp = "";
            while(s[i]>='0' && s[i]<='9'){
                tmp = tmp + s[i];
                i++;
            }
            i--;
            ans.push_back(tmp);
        }
        else if(s[i] == ')'){
            while(!stk.empty() && stk.top()!="("){
                ans.push_back(stk.top());
                stk.pop();
            }
            stk.pop();
        }
        else {
            if(!stk.empty() && Priority(stk.top())>=Priority(t)){
                while(!stk.empty() && Priority(stk.top())>=Priority(t)){
                    ans.push_back(stk.top());
                    stk.pop();
                }
                stk.push(t);
            }
            else stk.push(t);
        }
        i++;
    }
    while(!stk.empty()){
        ans.push_back(stk.top());
        stk.pop();
    }
    return ans;
}

ll Calculate(vector<string> a){
    stack<ll> stk;
    for(int i=0;i<a.size();i++){
        string t = a[i];
        if(t[0]>='0' && t[0]<='9') stk.push(toInt(t));
        else{
            ll a = stk.top(); stk.pop();
            ll b = stk.top(); stk.pop();
            if(t == "*") stk.push(a*b);
            if(t == "/") stk.push(b/a);
            if(t == "+") stk.push(a+b);
            if(t == "-") stk.push(b-a);           
        }
    }
    return stk.top();
}

void Res(){
    string s;
    cin>>s;
    vector<string> a = toPosfix(s);
    cout<<Calculate(a)<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}
