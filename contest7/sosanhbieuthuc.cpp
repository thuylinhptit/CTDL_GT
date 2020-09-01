#include<bits/stdc++.h>
#define ll long long
using namespace std;

string Change(string s){
	stack <int> stk;
	for( int i=0; i<s.size(); i++ ){
		if( s[i] == '(' ) stk.push(i);
		else if( s[i] == ')' ){
			if( stk.size() > 0 ){
				int top = stk.top();
				stk.pop();
				if( top == 0 ) continue;
				else if( s[top-1] == '+' ) continue;
				else if( s[top-1] == '-' ) {
					for( int j=0; j<=i; j++ ){
						if( s[i] == '+' ) s[i] == '-';
						else if( s[i] == '-' ) s[i] == '+';
					} 
				}
			}
		}
	}
	
	string str="";
	for( int i=0; i<s.size(); i++ ){
		if( s[i] != ')' && s[i] != '(' ){
			str+=s[i];
		}
	}
	return str;
}
int main (){
	int t;
	cin>>t;
	cin.ignore();
	while( t-- ){
		string s1, s2;
		cin>>s1>>s2;
		s1=Change(s1);
		s2=Change(s2);
		if( s1 == s2 ) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

