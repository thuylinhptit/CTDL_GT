#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

int k,n;
int Binary_search(int a[],int l,int r){
    if(a[l]>k||a[r]<k) return -1;
    int mid = (l+r)/2;
    if(a[mid]==k) return mid;
    if(a[mid]>k) return Binary_search(a,l,mid-1);
    return Binary_search(a,mid+1,r);
}

void Res(){
    cin>>n>>k;
    int a[n+3];
    For(i,1,n) cin>>a[i];
    int x = Binary_search(a,1,n);
    if(x==-1) cout<<"NO\n";
    else cout<<x<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
