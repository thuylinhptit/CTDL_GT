#include<bits/stdc++.h>
#include<fstream>
#define MAX 100
using namespace std;
class DoThi{
	int n;
	int soTPLT=0;
	int A[100][100];
	public:
		string name="\nMy Graph";
		bool chuaxet[MAX];
		bool DocDuLieu( string tenfile );
		void khoitao();
		void TraLoi();
		void TPLT();
		void BFS_hangdoi(int u);
};

bool DoThi::DocDuLieu(string tenfile){
	ifstream filevao(tenfile.c_str());
	if( filevao.is_open() ){
		filevao>>n;
		cout<<"So dinh cua do thi: "<<n<<endl;
		cout<<"Ma Tran Ke:"<<endl;
		for( int i=1; i<=n ;i++ ){
			cout<<endl;
			for( int j=1; j<=n ;j++ ){
				filevao>>A[i][j];
				cout<<A[i][j]<<" ";
			}
		}
	}
}

void DoThi::TraLoi(){
	cout<<name<<endl;
}

void DoThi::khoitao(){
	for( int i=1; i<=n ;i++ ) chuaxet[i]=true;
}

void DoThi::BFS_hangdoi(int u){
	queue <int> hangdoi;
	hangdoi.push(u);
	chuaxet[u]=false;
	while( !hangdoi.empty() ){
		int s= hangdoi.front();
		hangdoi.pop();
		cout<<" "<<s;
		for( int t=1; t<=n ;t++ ){
			if( A[s][t]==1 && chuaxet[t]==true ){
				hangdoi.push(t);
				chuaxet[t]=false;
			}
		}	
	}
}

void DoThi::TPLT(){
	khoitao();
	for( int i=1; i<=n ;i++ ){
		if( chuaxet[i]==true ){
			soTPLT++;
			cout<<"Thanh phan lien thong thu: "<<soTPLT<<": ";
			BFS_hangdoi(i);
		}
	}
}
int main ()
{
	DoThi G;
	if( G.DocDuLieu("3_3_TPLT.in")){
		cout<<"Doc du lieu OK";
		G.TraLoi();
		G.khoitao();
		cout<<"Duyet TPLT: ";
		G.TPLT();
	}
	else{
		cout<<"Khong mo dc file";
	}
	
}
