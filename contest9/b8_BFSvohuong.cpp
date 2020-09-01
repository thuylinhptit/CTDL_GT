#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ok[1005];
vector<int>ke[1005];

void BFS( int u ){
	queue <int> q;
	q.push(u);
	while( q.size()>0 ){
		int top= q.front();
		q.pop();
		cout<<top<<' ';
		ok[top]=true;
		for( int i=0; i<ke[top].size(); i++ ){
			if( !ok[ke[top][i]] ){
				ok[ke[top][i]] = true;
				q.push( ke[top][i] );
			}
		}
	}
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int x,y,nguon;
		cin>>x>>y>>nguon;
		for( int i=0;i<1001; i++ ){
			ke[i].clear();
		}
		memset(ok,false,sizeof(ok));
		for( int i=0; i<y; i++){
			int a,b;
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
			
		}
		BFS(nguon);
		cout<<endl;	
	}
}

