#include<iostream>
#include<algorithm>
using namespace std;
int dem=0,stop,a[100000];
string s;
void sinh()
{
 int i=s.size()-2;
 while(i>=0&&s[i]>=s[i+1])
i--;
 if(i==-1) stop=1;
 else if( i >= 0)
 {
 int k=s.size()-1;
 while(s[i]>=s[k])
k--;
 swap(s[k],s[i]);
 sort( s.begin()+1+i, s.end() );
}
}
void hoanvi(){
 stop=0;
 sinh();
 if ( stop==0 ) cout<<dem<<' '<<s<<endl;
 else{
 	cout<<dem<<' '<<"BIGGEST"<<endl;
 }
}
int main()
{
 int test;
 cin>>test;
 while( test-- ){
 	cin>>dem>>s;
 	hoanvi();
 }
}
