#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		string s;
		stack<int> stk;
		stk.push(-1);
		cin>>s;
		int ans = 0;
		for( int i=0; i< s.size(); i++ ){
			if( s[i] == '(') stk.push(i);
			else{
				stk.pop();
				if( stk.size() > 0 ) ans = max( ans, i-stk.top() );
				if( stk.size() == 0 ) stk.push(i);
			}
		}
		cout<<ans<<endl;
	}
}
