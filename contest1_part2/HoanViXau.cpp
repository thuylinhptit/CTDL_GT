#include<bits/stdc++.h>
using namespace std;
string s;
int a[100];
bool chuaxet[100];
void Try(int i){
	for( int j=0; j<s.size(); j++ ){
		if( !chuaxet[j] ){
			a[i]=j;
			chuaxet[j] = true;
			if( i==s.size() ){
				for( int k=1; k<=s.size(); k++){
					cout<<s[a[k]];
				}
				cout<<' ';
			}
			else Try(i+1);
			chuaxet[j]=false;
		}
	}
}

int main ()
{
	int n;
	cin>>n;
	while( n-- ){
		cin>>s;
		memset(chuaxet, false, sizeof(chuaxet));
		sort(s.begin(), s.end());
		Try(1);
		cout<<endl;
	}
}
