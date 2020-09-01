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
	int n, ne;
	int A[MAX][MAX];
	canh E[MAX], ET[MAX];
	public:
		string name="\nMy Graph";
		int chuaxet[MAX];
		int truoc[MAX];
		int s,t;
		void TraLoi();
		bool DocDuLieu(string tenfile);
		void KhoiTao();
		bool isEuler();
		void DFS_dequy();
		bool IsDuyetHet();
		bool isEuler_cohuong();
		void Euler_cycle( int u );
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
bool Dothi:: isEuler(){
	for( int i=1; i<=n ; i++ ){
		int sum =0;
		for( int j=1; j<=n ; j++ ){
			sum += A[i][j];
		}
		if( sum%2 != 0 ){
			return false;
		}
	}
	return true;
}
void Dothi::DFS_dequy(int u){
	cout << " " << u;										// tham dinh u
	chuaxet[u]=false;										// danh dau da xet t
	for(int v=1; v<=n; v++){
		if((A[u][v]==1)&&(chuaxet[v]==true)){				// v la dinh ke cua u va chua xet dinh v
			DFS_dequy(v);
		}
	}
}
bool Dothi::IsDuyetHet(){
	for(int i=1; i<=n; i++){								// duyet mang chua xet xem con phan tu nao chua xet den hay ko?
		if(chuaxet[i]==true){
			return false;									// co it nhat 1 dinh chua duoc xet den trong qua trinh duyet DFS hoac BFS
		}
	}
	return true;											// toan bo tap dinh da duoc xet den trong DFS hoac BFS
}

bool Dothi::isEuler_cohuong(){
	for( int i=1; i<=n ; i++ ){
		khoitao();
		cout<<"\nDuyet DFS tai dinh "<<i<<": ";
		DFS_dequy(i);
		if( !IsDuyetHet() ) return false;
		int rowsum=0, colsum=0;
		for( int j=1; j<=n ; j++ ){
			rowsum += A[i][j];
			colsum +=A[j][i];
		}
		if( rowsum != colsum ){
			return false;
		}
	}
	return true;
}

void Dothi::Euler_cycle(int u){
	stack<int>	nganxep, CE;
	nganxep.push(u);										// day u vao ngan xep
	while(!nganxep.empty()){
		int s=nganxep.top();								// lay gia tri dinh do thi o dinh ngan xep
		for(int t=1; t<=n; t++){
			if(A[s][t]==1){									// t la dinh ke cua s
				nganxep.push(t);							// dua t vao ngan xep
				A[s][t]=0; A[t][s]=0;						// loai bo canh s, t
				break;
			}
			if(t==n){										// t=1..n ko xay ra break nao <-> khong co dinh ke
				nganxep.pop();
				CE.push(s);
			}
		}
	}
	while(!CE.empty()){
		if(CE.size()!=1){
			cout << CE.top() << " -> "; CE.pop();
		}
		else{
			cout << CE.top(); CE.pop();
		}
		
	}
}
void	Dothi::Hmt(int k){
	for(int y=1; y<=n; y++){							
		if(A[X[k-1]][y]==1){							
			if((k==n+1)&&(y==X[1])){					
				cout << "\n";
				for(int j=1; j<=n; j++){
					cout << X[j] << " -> ";
				}
				cout << X[1];
			}
			else{
				if(chuaxet[y]==true){						// dinh y: chua xet
					X[k]=y;									// thu nhan dinh y vao X[k]
					chuaxet[y]=false;						// danh dau da xet y
					Hmt(k+1);								// de quy xd X[k+1]
					chuaxet[y]=true;					
				}
			}
		}
	}
}		
int main (){
	Dothi G;
	if( G.DocDuLieu("4_2_Hamilton_n5.in")){
		G.isEuler_cohuong();
	}
	else{
		cout<<"\nKhong doc duoc file";
	}
}

