#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct congviec{
	int profit;
	int dealine;
};

bool cmp( congviec a, congviec b ){
	return a.profit > b.profit;
}

int main (){
	int t;
	cin>>t;
	while ( t-- ){
		int n;
		cin>>n;
		congviec a[50005];
		int b[50005];
		for( int i=1; i<= n; i++ ) b[i] = 1;
		for( int i=1; i<= n; i++ ) {
			int k;
			cin>>k;
			cin>>a[k].dealine >> a[k].profit;
		}
		sort( a+1 , a+1+n , cmp );
		int sum=0; 
		int d=0;
		for( int i=1; i<=n ; i++ ){
			int j= a[i].dealine;
			while( b[j] == 0 && j>1 ) j--;
			if( b[j] == 1 ){
				d++;
				sum += a[i].profit;
				b[j] = 0;
			}
			//cout<<sum<<endl;
			
		}
		cout<<d<<' '<<sum<<endl;
	}
	
}

