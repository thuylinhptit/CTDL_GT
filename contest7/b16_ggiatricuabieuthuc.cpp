#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		string s;
		cin>>s;
		stack<ll>stk;
		for( int i=0; i<s.size() ; i++ ){
			if( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
				ll b=stk.top(); stk.pop();
				ll a=stk.top(); stk.pop();
				ll tmp;
				if( s[i] == '+' ) tmp=a+b;
				else if( s[i] == '-' ) tmp=a-b;
				else if( s[i] == '*' ) tmp=a*b;
				else if( s[i] == '/' ) tmp=a/b;
				else if( s[i] == '%' ) tmp=a%b;
				else if( s[i] == '^' ){
					tmp=a;
					for( int i=0; i<b-1; i++ ){
						tmp*=a;
					}
				}
				stk.push(tmp);
			}
			else stk.push( (ll)( s[i]-'0') );
		}
		cout<<stk.top()<<endl;
	}
}

