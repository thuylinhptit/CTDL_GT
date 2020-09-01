#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	vector < ll > q;
	while( t-- ){
		string s;
		cin>>s;
		int id=0, res=0, cnt=0;
		for( int i=0; i< s.size() ; i++ ){
			if( s[i] == '[' ) q.push_back(i);
		}
		for( int i=0; i<s.size(); i++ ){
			if( s[i] == '[' ){
				cnt++;
				id++;
			}
			else cnt--;
			if( cnt < 0 ){
				res += q[id] - i;
				swap( s[q[id]], s[i] );
				cnt =1;
				id ++;
			}
		}
		cout<<res<<endl;
	}
}

