#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int T;
	cin>>T;
	int a[10]={1,2,5,10,20,50,100,200,500,1000};
	while( T-- ){
		int s=0;
		int d=0;
		int N;
		cin>>N;
		int i=9;
		while( i>=0 ){
			s+=a[i];
			if( s<=N ){
				d++;
			}
			else{
				s-=a[i];
				i--;
			}
			
		}
		cout<<d<<endl;
	}
}
