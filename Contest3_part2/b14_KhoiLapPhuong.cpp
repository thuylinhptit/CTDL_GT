#include<bits/stdc++.h>
#define ll long long

using namespace std;

string s;
ll res=0;
ll n;
vector <ll> v;

ll Binary_Search( ll sum ){
	ll l=0, r=1e6+5, ans=0, mid;
	while( l<=r ){
		mid = l+r >> 1;
		if( mid*mid*mid >sum ) r= mid-1;
		else{
			l=mid+1;
			ans = max(ans, mid);
		}
	}
	return ans;
}
void update(){
	ll sum =0;
	for( ll i=0; i<n ; i++ ){
		if( v[i] == 1 ) sum = sum*10 + (s[i]-'0');
	}
	ll bs= Binary_Search(sum);
	if( bs*bs*bs == sum ) res = max(res,sum);
}

void Try( ll i ){
	for( int j=0; j<=1; j++ ){
		v[i] = j;
		if( i == n-1 ) update();
		else Try( i+1 );
	}
}
int main ()
{
	ll t;
	cin>>t;
	while( t-- ){
		cin>>s;
		n=s.length();
		res=0;
		v.resize(n);
		Try(0);
		if( res == 0 ) cout<<"-1"<<endl;
		else cout<<res<<endl;
	}
}
