#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		ll k;
		string s;
		cin>>k>>s;
		priority_queue <ll> q;
		ll cnt[257]={0};
		for( ll i=0; i<s.size(); i++ ) cnt[s[i]]++;
		sort( cnt, cnt+257 );
		reverse ( cnt , cnt+257 );
		for( ll i=0; cnt[i] != 0 ; i++ ){
			q.push(cnt[i]);
		}
		for( int i=0; i<k ; i++ ){
			ll tmp = q.top();
			q.pop();
			tmp--;
			q.push(tmp);
		}
		ll sum =0;
		while (!q.empty()){
			ll tmp = q.top();
			sum += tmp*tmp;
			q.pop();
		}
		cout<<sum<<endl;
	}
}

