#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		int k;
		cin>>k;
		string s;
		cin>>s;
		for( int i=0; i<s.size(); i++ ){
			int Max=s[s.size()-1];
			int pos=s.size()-1;
			for( int j=s.size()-1; j>i; j-- ){
				if(s[j]>Max ){
					Max=s[j];
					pos=j;
				}
			}
			if(Max>s[i] && k>0 ){
				swap( s[i], s[pos] );
				k--;
			}
		}
		cout<<s<<endl;
	}
}
