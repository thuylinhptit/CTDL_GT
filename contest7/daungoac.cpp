#include<bits/stdc++.h>
#define ll long long
using namespace std;
void Check(){
	string s;
	stack <char> a;
	cin>>s;
	for( int i=0; i< s.size(); i++ ){
		if( s[i] == '(' || s[i] == '{' || s[i] == '[' ) a.push(s[i]);
		else{
			if( a.size() == 0 ){
				cout<<"NO"<<endl;
				return;
			} 
			if( s[i] == ')' ){
				if( a.top() != '(' ){
					cout<<"NO";
					return;
				}
				a.pop();
			}
			if( s[i] == '}' ){
				if( a.top() != '{' ){
					cout<<"NO";
					return;
				}
				a.pop();
			}
			if( s[i] == ']' ){
				if( a.top() != '[' ){
					cout<<"NO";
					return;
				}
				a.pop();
			}
			
		}
	
	}
	if( a.size() ) cout<<"NO";
		else cout<<"YES";
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		Check();
		cout<<endl;
	}
}

