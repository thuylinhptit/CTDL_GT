#include<bits/stdc++.h>
#define ll long long
#define  MAX 100
using namespace std;
struct dinh{
	int num, id;
};
struct canh{
	dinh u,v;
	int c;
};
class Dothi{
	int n, ne, neMST;
	int A[MAX][MAX];
	canh E[MAX], ET[MAX];
	public:
		string myname="\nMy Graph";
		int chuaxet[MAX];
		int truoc[MAX];
		int s,t;
		void TraLoi();
		bool DocDuLieu(string tenfile);
		void KhoiTao();
		void Kruskal();
};

bool Dothi:: DocDuLieu( string tenfile ){
	ifstream filevao( tenfile.c_str() );
	if( filevao.is_open() ){
		filevao >> n;
		cout<<"\nSo dinh cua do thi n = "<<n;
		cout<<"\nMa tran ke:";
		for( int i=1; i<=n ; i++ ){
			cout<<"\n";
			for( int j=1; j<=n ; j++ ){
				filevao >> A[i][j];
				cout<<" "<<A[i][j];
				if( (j>i) && (A[i][j]) != 0 ){
					ne++;
					E[ne].u.num = i;
					E[ne].v.num = j;
					E[ne].c = A[i][j];
				}
			}
		}
		filevao.close();
		return true;
	}
	return false;
}

void Dothi::TraLoi(){
	cout<<myname;
}
void Dothi::Kruskal(){
	dinh V[n];
	for(int i=1; i<=n; i++){
		V[i].num=i;	V[i].id=i;
	}
	neMST=0;												// Cay khung be nhat la rong
	dH=0;
	for(int e1=1; e1<ne; e1++){
		for(int e2=e1+1; e2<=ne; e2++){
			if(E[e1].c>E[e2].c){	//Doi cho
				canh	etmp;
				etmp=E[e1];	E[e1]=E[e2];	E[e2]=etmp;
			}
		}
	}
	int e=1;
	while(e<=ne){
		if(V[E[e].u.num].id!=V[E[e].v.num].id){
			neMST++;
			EMST[neMST]=E[e];
			dH+=E[e].c;
		
			for(int i=1; i<=n; i++){ 
				int	idtmp=V[E[e].v.num].id;
				if(V[i].id==idtmp){
					V[i].id=V[E[e].u.num].id;
				}
				
			}
		}
		e++;
	}
	if(neMST==n-1){
		cout << "\n Cay khung be nhat theo Kruskal: dH=" << dH;
		for(int e=1; e<=neMST; e++){
			cout << "\n Canh " << e << ": " << EMST[e].u.num << ", " 
			                                << EMST[e].v.num;
		}
	}
	else{
		cout << "\n Do thi khong lien thong";
	}
}

int main (){
	Dothi G;
	if( G.DocDuLieu("5_2_Kruskal_n5.in")){
		G.Kruskal();
	}
	else{
		cout<<"\nKhong doc duoc file";
	}
}

