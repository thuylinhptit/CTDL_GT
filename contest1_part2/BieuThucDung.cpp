#include<bits/stdc++.h>
#define ll long long 

using namespace std;

string s;
ll t;
vector<ll> p;

int main(){
	cin >> t;
    while(t--){
    	ll cnt = 0, res = 0, id = 0;
        cin >> s;
    	for (ll i = 0; i < s.length(); i++){
    		if (s[i] == '[')  p.push_back(i);
		}
    	for (ll i = 0; i < s.length(); i++)	{
    		if( s[i]=='[' ) cnt += 1;
    		else cnt += -1;
        	id += (s[i] == '[');
        	//cout<<id<<" "<<cnt;
        	if (cnt < 0){
            	res += p[id] - i;
            	swap(s[p[id]], s[i]);
            	cnt = 1;
            	id++;
        	}
        //	cout<<" "<<cnt<<" "<<s<<endl;
    	}
    cout << res << endl;
    }
    return 0;
}
