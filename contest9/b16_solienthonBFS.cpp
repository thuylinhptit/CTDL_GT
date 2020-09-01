#include<bits/stdc++.h>
#define ll long long
using namespace std;
int truoc[1005];
bool ok[1005];
vector <int> ke[1005];

void BFS( int u ){
	queue <int> q;
	q.push(u);
	while( q.size() > 0 ){
		int top= q.front();
		q.pop();
		ok[top]=true;
		for( int i=0; i<ke[top].size(); i++ ){
			if( !ok[ke[top][i]] ){
				truoc[ke[top][i]] = top;
				q.push(ke[top][i]);
				
			} 
		}
	}
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int v,e;
		int dem=0;
		cin>>v>>e;
		for( int i=0; i<1001; i++ ){
			ke[i].clear();
		}
		memset(ok, false, sizeof(ok) );
		memset(truoc, 0 , sizeof(truoc) );
		for( int i=0; i<e; i++ ){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for( int i=1; i<=v; i++ ){
			if( !ok[i] ){
				dem++;
				BFS(i);
			}
		}
		cout<<dem<<endl;
	}
}

