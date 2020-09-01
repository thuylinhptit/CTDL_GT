#include<bits/stdc++.h> 
#define For(i,a,b) for(int i=a;i<=b;i++)
#define ll long long 

using namespace std;

void Res(){
    int n,kt=1; 
    cin>>n;
    int d=n/7,m=n%7;
    if(m==0) For(i,1,d) {
		cout<<7;
		kt=0;
	}
    else if(n==4) cout<<4;
    else{
        while(d){
            if(m%4==0){
                kt=0;
                For(i,1,m/4) cout<<4;
                For(i,1,d) cout<<7;
                break;
            }
            else{
                d--;
                m+=7;
                
            }
        }
    }
    if(kt) cout<<-1;
    cout<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
