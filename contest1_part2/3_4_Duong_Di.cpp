#include<bits/stdc++.h>
#include<fstream>
#define MAX 100
using namespace std;

class Graph{
	int n;
	int A[MAX][MAX];
	public:
		bool chuaxet[MAX];
		bool truoc[MAX];
		int s,t;
		int soTPLT;
		string name = "\nMy graph\n";
		bool DocDuLieu( string tenfile );
		void Traloi();
		void khoitao();
		void DuongDi(int s, int t);
		void DFS_nganxep(int u);
};


bool Graph::DocDuLieu(string tenfile){
	ifstream filevao(tenfile.c_str());
	if( filevao.is_open() ){
		filevao>>n;
		cout<<"So dinh cua graph la: "<<n<<endl;
		cout<<"Ma tran ke: ";
		for( int i=1; i<=n ;i++ ){
			cout<<endl;
			for( int j=1; j<=n ;j++ ){
				filevao>>A[i][j];
				cout<<A[i][j]<<" ";
			}
		}
		filevao.close();
		cout<<"Nhap 2 diem dau mut: "<<endl;
		cout<<"s = "; cin>>s;
		cout<<"t = "; cin>>t;
		return true;
	}
	return false;
}

void Graph::khoitao(){
	for( int i=1; i<=n ;i++ ) {
		chuaxet[i]=true;
		truoc[i]=0;
	}
	soTPLT=0;
}

void Graph::Traloi(){
	cout<<name;
}

void Graph::DuongDi(int s, int t){
	if( truoc[t] == 0 ){
		cout<<"Khong co duong di tu "<<s<<" den "<<t;
	}
	else{
		cout<<t<<" -> ";
		int u= truoc[t];
		while( u!=s ){
			cout<<" "<<u<<" -> ";
			u=truoc[u];
		}
		cout<<s<<endl;
	}
}

void Graph::DFS_nganxep(int u){
	stack<int>	nganxep;
	nganxep.push(u);										// day u vao ngan xep
	cout << " " << u;										// tham dinh u
	chuaxet[u]=false;										// danh dau da xet u
	while(!nganxep.empty()){								// ngan xep <> rong
		int s=nganxep.top();								// lay doi tuong dinh ngan xep
		nganxep.pop();										// loai dinh s khoi dinh ngan xep
		for(int t=1; t<=n; t++){
			if((A[s][t]==1)&&(chuaxet[t]==true)){			// t la dinh ke cua s va chua xet t
				cout << " " << t;							// tham dinh t
				chuaxet[t]=false;							// danh dau da xet t
				nganxep.push(s);							// dua s vao ngan xep
				nganxep.push(t);							// dua t vao ngan xep
				truoc[t]=s;									// luu gia tri s vao truoc[t]
				break;
			}
		}
	}
}
int main ()
{
	Graph G;
	if( G.DocDuLieu("3_4_DuongDi.in")){
		cout<<"Doc file thanh cong"<<endl;
		cout<<"Duong di:"<<endl;
		G.khoitao();
		G.DFS_nganxep(G.s);
		G.DuongDi(G.s, G.t);
	}
	else{
		cout<<"Khong lay duoc thong tin";
	}
	
}

