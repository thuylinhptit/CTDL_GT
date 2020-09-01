#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> ke[1005];
bool ok[10005];

void DFS(int u){
	ok[u] = true;
	cout<<u<<' ';
	for( int i=0; i<ke[u].size(); i++ ){
		if( !ok[ke[u][i]] ){
			DFS( ke[u][i] );
		}
	}
}


int main (){
	int t;
	cin>>t;
	while( t-- ){
		int x,y,nguon;
		cin>>x>>y>>nguon;
		for( int i=0; i<1001; i++ ){
			ke[i].clear();
		}
		memset(ok,false, sizeof(ok) );
		for( int i=0; i<y; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		DFS(nguon);
		cout<<endl;
	}
}

