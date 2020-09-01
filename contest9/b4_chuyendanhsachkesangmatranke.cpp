#include<bits/stdc++.h>
#define ll long long
using namespace std;
int d[1005][1005];
int main (){
	int n;
	cin>>n;
	vector<int>ke[1005];
	string s;
	cin.ignore();
	for( int i=1; i<=n ; i++ ){
		getline(cin,s);
		s+=" ";
		int so=0;
		for( int j=0; j<s.size(); j++ ){
			if( s[j]>='0' && s[j]<='9' ){
				so = 10*so + (int)(s[j]-'0');
			}
			else if( so>0 ){
				ke[i].push_back(so);
				so=0;
			}
		}
	}
	for( int i=1; i<=n ;i++ ){
		sort( ke[i].begin(), ke[i].end() );
	}
	memset(d,0,sizeof(d));
	for( int i=1; i<=n ;i++ ){
		for( int j=0; j<ke[i].size() ; j++ ){
				d[i][ke[i][j]] = d[ke[i][j]][i] = 1;
			
		}
	}
	for( int i=1; i<=n ;i++ ){
		for( int j=1; j<=n ; j++ ){
			cout<<d[i][j]<<' ';
		}
		cout<<endl;
	}
}

