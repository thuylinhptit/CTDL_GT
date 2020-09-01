#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		string s;
		cin>>s;
		stack<char> stk;
		for( int i=0; i<s.size() ; i++ ){
			if( s[i]=='(' || (s[i] == ')' && stk.size() == 0 )) stk.push(s[i]);
			else if( s[i] == ')' ){
				if( stk.size() > 0 && stk.top() == '(' ) stk.pop();
				else stk.push(s[i]);
			}
		}
		int dem1=0, dem2=0;
		while( stk.size()>0 ){
			if( stk.top() == '(') dem1 ++;
			else dem2++;
			stk.pop();
		}
		int sum = dem1/2 + dem2/2 + dem1%2 + dem2%2;
		cout<<sum<<endl;
	}
}
