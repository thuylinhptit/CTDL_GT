#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> ke[1005];
bool ok[1005];
int truoc[1005];

void BFS( int u, int v ){
	queue <int> q;
	q.push(u);
	while( q.size()>0 ){
		int top = q.front();
		q.pop();
		ok[top]=true;
		if( top == v ){
			cout<<"YES"<<endl;
			return;
		}
		for( int i=0; i<ke[top].size(); i++ ){
			if( !ok[ke[top][i]] ){
				ok[ke[top][i]] = true;
				truoc[ke[top][i]] = top;
				q.push( ke[top][i] );
			}
		}
	}
	cout<<"NO"<<endl;
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int v,e;
		cin>>v>>e;
		for( int i=0; i<1001; i++ ){
			ke[i].clear();
		}
		for( int i=0; i<e; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		int x;
		cin>>x;
		while( x-- ){
			memset(ok,false, sizeof(ok));
			memset(truoc, 0,sizeof(truoc));
			int g,h;
			cin>>g>>h;
			BFS(g,h);
		}
	}
}

