#include<bits/stdc++.h>
using namespace std;
int n,dem=0;
int cot[200]={0}, cheo1[200]={0}, cheo2[200]={0};
int a[200][200]={0};
void timHau( int i){
	if( i == n+1 ){
		dem++;
		return;
	}
	for( int j=1; j<=n ;j++ ){
		if( cot[j]==0 && cheo1[i+j]==0 && cheo2[i-j+n]==0){
			cot[j]=1;
			cheo1[i+j]=1;
			cheo2[i-j+n]=1;
			a[i][j]=1;
			timHau(i+1);
			cot[j]=0;
			cheo1[i+j]=0;
			cheo2[i-j+n]=0;
			a[i][j]=0;
		}
	}
}
int main ()
{
	cin>>n;
	timHau(1);
	cout<<dem;
}
