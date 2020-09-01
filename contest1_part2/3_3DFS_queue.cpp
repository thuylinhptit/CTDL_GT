#include<bits/stdc++.h>
#include<fstream>
#define MAX 100
using namespace std;
class Dothi{
	int n;
	int A[MAX][MAX];
	public:
		bool chuaxet[MAX];
		string myname="\nMy Graph";
		bool DocDuLieu(string tenfile);
		void khoitao();
		void TraLoi();
		void BFS_queue(int u);
};

bool Dothi::DocDuLieu(string tenfile){
	ifstream filevao(tenfile.c_str());
	if( filevao.is_open() ){
		filevao>>n;
		cout<<"So dinh cua do thi: "<<n<<endl;
		cout<<"Ma tran ke: "<<endl;
		for( int i=1; i<=n ;i++ ){
			cout<<endl;
			for( int j=1; j<=n ;j++ ){
				filevao>>A[i][j];
				cout<<A[i][j]<<' ';
		}
	}
		filevao.close();
		return true;
	}
	return false;
}

void Dothi::khoitao(){
	for( int i=1; i<=n ;i++ ){
		chuaxet[i]=true;
	}
}

void Dothi::TraLoi(){
	cout<<myname;
}

void Dothi::BFS_queue(int u){
	queue <int> hangdoi;
	hangdoi.push(u);
	chuaxet[u]=false;
	while( !hangdoi.empty() ){
		int s=hangdoi.front();
		hangdoi.pop();
		cout<<' '<<s;
		for( int t=1; t<=n ;t++ ){
			if( A[s][t]==1 && chuaxet[t]==true ){
				hangdoi.push(t);
				chuaxet[t]=false;
			}
		}
	}
}
int main ()
{
	Dothi G;
	if( G.DocDuLieu("3_1_DFS.in") ){
		cout<<"Doc du lieu thanh cong\n";
		G.TraLoi();
		cout<<"DFS queue "<<endl;
		G.khoitao();
		G.BFS_queue(1);
	}
	else{
		cout<<"Khhong doc duoc";
	}
	
}
