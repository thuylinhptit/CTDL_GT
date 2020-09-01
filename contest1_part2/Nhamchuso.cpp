#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a,b;

ll chuyendoi(string a){
	stringstream str2num(a);
	ll temp=0;
	str2num>>temp;
	return temp;
}

ll soMax(string a){
	for(int i=0; i<a.size(); i++){
		if( a[i]=='5' ) a[i]='6';
	}
	return chuyendoi(a);
}

ll soMin(string a){
	for(int i=0; i<a.size(); i++){
		if( a[i]=='6' ) a[i]='5';
	}
	return chuyendoi(a);
}

int main ()
{
	string a,b;
	cin>>a>>b;
	cout<<soMin(a)+soMin(b)<<" "<<soMax(a)+soMax(b)<<endl;
	
}
