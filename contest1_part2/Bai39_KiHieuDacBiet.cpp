#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int n,pos,ok;
ll a[100];
string s;

void Try(int n,int index,int d){
    cout<<s[index]<<endl;
    if(n>pos*2) return;
    if(ok==0)
        for(int i=0;i<s.length();i++){
            while(1){
                a[i] = a[i]+n+1;
                Try(n*2,i,d+1);
                a[i] = a[i]-n-1;
            }
    }
}

void Res(){
    ok=0;
    cin>>s>>pos;
    n=s.length();
    For(i,0,n-1) a[i]=i;
    Try(n,0,1);
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
