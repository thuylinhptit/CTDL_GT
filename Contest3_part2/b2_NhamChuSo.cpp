#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll chuyendoi( string s ){
	stringstream strtonum(s);
	ll num=0;
	strtonum >> num;
	return num;
}

ll soMax( string s ){
	for( int i=0; i<s.size() ; i++ ){
		if( s[i] == '5' ) s[i]='6';
	}
	return chuyendoi(s);
}
ll soMin( string s ){
	for( int i=0; i<s.size() ; i++ ){
		if( s[i] == '6' ) s[i] = '5';
	}
	return chuyendoi(s);
}

int main (){
	string a,b;
	cin>>a>>b;
	cout<<soMin(a) + soMin(b) <<" "<< soMax(a) + soMax(b);
}

