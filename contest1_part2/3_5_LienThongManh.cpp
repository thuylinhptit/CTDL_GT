#include<bits/stdc++.h>
#include<fstream>
#define MAX 100

using namespace std;

class Graph{
	int n;
	int a[MAX][MAX];
	public:
		bool chuaxet[MAX];
		int truoc[MAX];
		bool Docdulieu( string tenfile );
		void khoitao();
		bool DuyetHet();
		void LienThongManh();
		void BFS_hangdoi(int u);
};
void Graph::BFS_hangdoi(int u){
	queue<int>hangdoi;
	hangdoi.push(u);
	chuaxet[u]=false;
	
}

bool Graph::Docdulieu(string tenfile){
	ifstream filevao( tenfile.c_str() );
	if( filevao.is_open() ){
		filevao >> n;
		cout<<"Do thi co so dinh la: "<<n<<endl;
		cout<<"Ma tran ke: "<<endl;
		for( int i=1; i<=n ;i++ ){
			cout<<endl;
			for( int j=1; j<=n ;j++ ){
				filevao>>a[i][j];
				cout<<a[i][j]<<' ';
			}
		}
		filevao.close();
		return true;
	}
	return false;
}

void Graph::khoitao(){
	for( int i=1; i<=n ; i++ ){
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

void Graph::LienThongManh(){
	khoitao();
	for( int u=1; u<=n ;u++ ){
		cout<<"Duyet hang doi tinh tu "<<u<<": ";
		BFS_hangdoi(u);
		if( DuyetHet() == false ){
			cout<<"Do thi khong lien thong manh ";
			return;
		}
		khoitao();
	}
	cout<<"Do thi lien thong manh";
	return;
}
int main ()
{
	Graph G;
	if( G.Docdulieu("3_5_KoLienThongManh.in") ){
		G.LienThongManh();
	}
	else{
		cout<<"Khong doc duoc file";
	}
}
