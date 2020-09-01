#include<bits/stdc++.h>
#include<fstream>
#define MAX 100
using namespace std;

class Graph{
	int n;
	int a[MAX][MAX];
	public:
		int truoc[MAX];
		bool chuaxet[MAX];
		bool Docdulieu( string tenfile );
		void khoitao();
		bool DuyetHet();
		void BFS_hangdoi(int u);
		void DinhTru();
};

bool Graph::Docdulieu(string tenfile){
	ifstream filevao(tenfile.c_str() );
	if( filevao.is_open() ){
		filevao>>n;
		cout<<"So dinh cua graph la: "<<n<<endl;
		cout<<"Ma tran ke: "<<endl;
		for( int i=1; i<=n ; i++ ){
			cout<<endl;
			for( int j=1; j<=n ;j++ ){
				filevao>>a[i][j];
				cout<<a[i][j]<<" ";
			}
		}
		filevao.close();
		return true;
	}
	return false;
}

void Graph::khoitao(){
	for( int i=1; i<=n ;i++ ){
		chuaxet[i]=true;
	}
}

bool Graph::DuyetHet(){
	for( int i=1; i<=n ;i++ ){
		if( chuaxet[i]==true ){
			return false;
		}
	}
	return true;
}

void Graph::BFS_hangdoi(int u){
	queue<int>hangdoi;
	hangdoi.push(u);
	chuaxet[u]=false;
	while( !hangdoi.empty() ){
		int s= hangdoi.front();
		hangdoi.pop();
		cout<<' '<<s;
		for( int t=1; t<=n ;t++ ){
			if( a[s][t]==1 && chuaxet[t]==true ){
				hangdoi.push(t);
				chuaxet[t]=false;
				truoc[t]=s;
			}
		}
	}
}

void Graph::DinhTru(){
	khoitao();
	for( int u=1; u<=n ;u++ ){
		chuaxet[u]=false;
		if( u==1 ){
			BFS_hangdoi(2);
		}
		else{
			BFS_hangdoi(1);
		}
		if( DuyetHet()==false ){
			cout<<"Dinh "<<u<<" la dinh tru"<<endl;
		}
		else{
			cout<<"Dinh "<<u<<" khong la dinh tru"<<endl;
		}
		khoitao();
	}
}
int main ()
{
	Graph G;
	if( G.Docdulieu("3_6_DinhTru.in")){
		cout<<"Doc du lieu OK";
		G.DinhTru();
	}
	else{
		cout<<"Doc du lieu khong thanh cong";
	}
}
