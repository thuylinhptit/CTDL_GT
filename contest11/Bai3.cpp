#include<bits/stdc++.h> 
#define ll long long 

using namespace std;

int search(int in[],int x,int n){
    for( int i=1; i<=n ; i++ ){
    	if(in[i-1]==x) return i-1;	
	}
    return -1;
}

void Postorder(int in[],int pre[],int n){
    int root = search(in,pre[0],n);
    if(root != 0){
        Postorder(in,pre+1,root);
    }
    if(root != n-1){ 
        Postorder(in + root + 1, pre + root + 1, n-root-1);
    }
    cout<< pre[0] <<" ";
}

void Res(){
    int n;
    cin>>n;
    int in[n+1],pre[n+1];
    for( int i=1; i<=n; i++ ) cin>>in[i-1];
    for( int i=1; i<=n ; i++) cin>>pre[i-1];
    Postorder(in,pre,n);
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
