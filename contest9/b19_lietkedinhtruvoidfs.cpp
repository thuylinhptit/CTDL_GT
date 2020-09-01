#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ok[1005];
vector <int> ke[1005];

void DFS(int u){
	ok[u]=true;
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
		int v,e;
		int sum=0;
		int res;
		cin>>v>>e;
		for( int i=0; i<1001; i++ ){
			ke[i].clear();
		}
		memset(ok, false, sizeof(ok));
		for( int i=0; i<e; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for( int i=1; i<=v; i++ ){
			if( !ok[i] ){
				sum++;
				DFS(i);
			}
		}
		for( int i=1; i<=v; i++ ){
			memset(ok, false, sizeof( ok ) );
			ok[i]=true;
			res=0;
			for( int j=1; j<=v; j++ ){
				if( !ok[j] ){
					res++;
					DFS(j);
				}
			}
			if( res > sum ) cout<<i<<" ";
		}
		cout<<endl;
		
	}
}

