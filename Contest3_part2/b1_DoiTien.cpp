#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int a[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 };
	int T;
	cin>>T;
	while( T-- ){
		int sum = 0;
		int d = 0;
		int n;
		cin>>n;
		int i=9;
		while( i >= 0 ){
			sum += a[i];
			if( sum <= n ){
				d++;
			}
			else{
				sum -=a[i];
				i--;
			}
		}
		cout<<d<<endl;
	}
}

