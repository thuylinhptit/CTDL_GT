#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> ke[1005];
bool ok[1005];
int truoc[1005];

void DFS( int u, int v ){
	if( ok[v] == true ) return;
	ok[u]=true;
	for( int i=0; i<ke[u].size(); i++ ){
		if( !ok[ke[u][i]] ){
			truoc[ke[u][i]] = u;
			DFS( ke[u][i],v );
		}
	}
}

void handle( int u, int v ){
	if( ok[v] == false ){
		cout<<"-1";
		return;
	}
	vector <int> a;
	while( u!= v ){
		a.push_back(u);
		u=truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for( int i=0; i<a.size(); i++ ){
		cout<<a[i]<<' ';
	}
	
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		for( int i=0; i<1001; i++ ){
			ke[i].clear();
		}
		memset( ok, false, sizeof(ok) );
		memset( truoc, 0, sizeof(truoc));
		int v,e,nguon, dich;
		cin>>v>>e>>nguon>>dich;
		for( int i=0; i<e; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		DFS( nguon, dich );
		handle( dich , nguon );
		cout<<endl;
	}
}

