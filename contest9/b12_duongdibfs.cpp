#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> ke[1005];
bool ok[1005];
int truoc[1005];
void BFS( int u, int v ){
	queue <int> q;
	q.push(u);
	while( q.size() > 0 ){
		int top= q.front();
		q.pop();
		ok[top]=true;
		if( top == v ) return;
		for( int i=0; i<ke[top].size(); i++ ){
			if( !ok[ke[top][i]] ){
				ok[ke[top][i]] = true;
				truoc[ke[top][i]]=top;
				q.push(ke[top][i]);
			}
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
		if( u==0 ){
			cout<<"-1";
			return;
		}
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
		BFS( nguon, dich );
		handle( dich , nguon );
		cout<<endl;
	}
}

