#include<iostream>
using namespace std;
int n,stop =0;
string s;
void xuat()
{
 for(int i=0;i<s.size();i++)
cout<<s[i];
 cout<<endl;
}
void sinh()
{
 int i=s.size()-1;
 while(i>=0&& s[i]=='1')
 {
 s[i]='0';
 i--;
 }
 if(i==-1) stop =1;
 else s[i]='1';
}
void ctrinh()
{
 stop =0;
 if(stop==0)
 {
 sinh();
 xuat();
 }
}
main()
{
	int t;
	cin>>t;
 while( t-- ){
 	cin>>s;
 	ctrinh();
 }
}
