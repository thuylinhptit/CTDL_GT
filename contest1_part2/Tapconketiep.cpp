
#include<iostream>
using namespace std;
int a[5000],n,k,stop=0;
void in()
{
 for(int i=1;i<=k;i++)
 cout<<a[i]<<" ";
 cout<<endl;
}
void sinh()
{
 int i=k;
 while(a[i]==n-k+i) i--;
 if(i==0) stop=1;
 else a[i]++;
 int p=a[i];
 while(i<=k) a[i++]=p++;
}
void tohop()
{
 stop=0;
 if(stop==0)
 {
 sinh();
 in();
 }
}
main()
{
 int t;
 cin>>t;
 while( t-- ){
 	cin>>n>>k;
	 for( int i=1; i<=k; i++ ) cin>>a[i];
 	tohop();
 }
}
