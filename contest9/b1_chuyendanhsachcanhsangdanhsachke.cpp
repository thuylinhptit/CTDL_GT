#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int d,c;
		cin>>d>>c;
		vector<int> ke[d+5];
		for( int i=0; i<c; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for( int i=1; i<=d; i++ ){
			sort(ke[i].begin(), ke[i].end());
		}
		for( int i=1; i<=d; i++ ){
			cout<<i<<": ";
			for( int j=0; j<ke[i].size(); j++ ){
				cout<<ke[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

