#include<bits/stdc++.h> 
#define ll long long

using namespace std;

void Tree(int a[],int l,int n){
    if(l>n) return;
    int m = l + (n-l)/2;
    cout<<a[m]<<" ";
    Tree(a,l,m-1);
    Tree(a,m+1,n);
}

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    for( int i=1; i<=n ; i++ ) cin>>a[i-1];
    sort(a,a+n);
    Tree(a,0,n-1);
    cout<<'\n';

}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
