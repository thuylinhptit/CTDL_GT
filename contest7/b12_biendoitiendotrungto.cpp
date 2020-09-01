#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		string s;
		cin>>s;
		stack<string> stk;
		for( int i= s.size()-1; i>=0 ; i-- ){
			if( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i]=='/' || s[i] =='%' || s[i] == '^' ){
				string first=stk.top();
				stk.pop();
				string second = stk.top();
				stk.pop();
				string tmp = '(' + first + s[i] + second + ')';
				stk.push(tmp);
			}
			else stk.push(string(1,s[i]));
			
		}
		cout<<stk.top()<<endl;
	}
}

