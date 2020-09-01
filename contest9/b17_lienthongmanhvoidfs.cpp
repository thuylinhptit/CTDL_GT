#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> ke[1005];
bool ok[1005];
int truoc[1005];
void DFS(int u){
	ok[u] = true;
	for( int i=0; i<ke[u].size(); i++ ){
		if( !ok[ke[u][i]] ){
			truoc[ke[u][i]] = u;
			DFS( ke[u][i] );
		} 
	}
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int v,e;
		int dem=0;
		bool check=true;
		cin>>v>>e;
		for( int i=0; i<1001; i++ ){
			ke[i].clear();
		}
		for( int i=0; i<e; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
		//	ke[b].push_back(a);
		}
		for( int i=1; i<=v ; i++ ){
			memset( ok, false, sizeof(ok) );
			DFS(i);
			for( int j=1; j<=v ; j++ ){
				if( !ok[j] ){
					check = false;
					break;
				}
			}
			if( check ) continue;
		}
		if( check ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
}

