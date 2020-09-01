#include<bits/stdc++.h>
#include<fstream>
#define MAX 100
using namespace std;
class Do_thi{
	int n;
	int A[MAX][MAX];
	public:
		string myname ="\nMy graph";
		int chuaxet[MAX];
		void TraLoi();
		bool DocDuLieu( string tenfile );
		void DFS_dequy(int u);
		void khoitao();
};

bool Do_thi::DocDuLieu(string tenfile){
	ifstream filevao(tenfile.c_str());
	if( filevao.is_open() ){
		filevao>>n;
		cout<<"\n So dinh cua do thi la: "<<n;
		cout<<"\n Ma tran ke: ";
		for( int i=1; i<=n ; i++ ){
			cout<<"\n";
			for(int j=1; j<=n ; j++){
				filevao>>A[i][j];
				cout<<A[i][j]<<' ';
			}
		}
		filevao.close();
		return true;
	}
	return false;
}

void Do_thi::TraLoi(){
	cout<<myname;
}

void Do_thi::khoitao(){
	for( int i=1; i<=n ;i++ ){
		chuaxet[i]=true;
	}
}

void Do_thi::DFS_dequy(int u){
	cout<<" "<<u;
	chuaxet[u]=false;
	for( int v=1; v<=n ;v++ ){
		if( (A[u][v]==1) && (chuaxet[v]==true) ) DFS_dequy(v);
	}
}
int main ()
{
	Do_thi G;
	if( G.DocDuLieu("3_1_DFS.in")){
		cout<<"Doc du lieu OK nahh"<<endl;
		G.TraLoi();
		cout<<"Duyet DFS_dequy"<<endl;
		G.khoitao();
		G.DFS_dequy(1);
	}
	else{
		cout<<"Khong mo duoc file"<<endl;
	}
	
}
