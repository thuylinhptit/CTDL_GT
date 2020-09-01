#include<bits/stdc++.h>
#include<fstream>
#define MAX 100

using namespace std;

class DoThi{
	int n;
	int A[MAX][MAX];
	public:
		string myname="\nMy Name";
		int chuaxet[MAX];
		void TraLoi();
		bool DocDuLieu( string tenfile );
		void DFS_stack(int u);
		void DFS_dequy(int u);
		void khoitao();
		
};

bool DoThi:: DocDuLieu(string tenfile){
	ifstream filevao(tenfile.c_str());
	if( filevao.is_open() ){
		filevao >> n;
		cout<<"\nSo dinh cua do thi: "<<n;
		cout<<"\nMa tran ke: ";
		for( int i=1; i<=n ; i++ ){
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
void DoThi :: TraLoi(){
	cout<<myname;
}

void DoThi::khoitao(){
	for( int i=1; i<=n ;i++ ){
		chuaxet[i]=true;
	}
}

void DoThi::DFS_stack(int u){
	stack <int> nganxep;
	nganxep.push(u);
	cout<<u<<' ';
	chuaxet[u]=false;
	while( !nganxep.empty() ){
		int s=nganxep.top();
		nganxep.pop();
		for( int t=1; t<=n ;t++ ){
			if( A[s][t]==1 && chuaxet[t]==true ){
				cout<<t<<' ';
				chuaxet[t]=false;
				nganxep.push(s);
				nganxep.push(t);
				break;
			}
		}
	} 
}
int main ()
{
	DoThi G;
	if( G.DocDuLieu("3_1_DFS.in")){
		cout<<"\nDoc du lieu Ok";
		G.TraLoi();
		cout<<"\nDuyet DFS Stack: ";
		G.khoitao();
		G.DFS_stack(1);
	}
	else{
		cout<<"\nKhong doc duoc du lieu";
	}
}
