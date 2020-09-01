#include<bits/stdc++.h> 
#define ll long long

using namespace std;

int pre[1005];

void PostOrder(int left,int right){
    if(left > right ) return;
    int i;
    for(i=left + 1 ; i <= right ; i++ ) 
		if( pre[i] > pre[left] )  break;
    PostOrder( left + 1 , i - 1 );
    PostOrder( i , right );
    cout<< pre[left] <<" ";
}

void Res(){
    int n;
    cin>>n;
    for( int i=1; i<=n ; i++ ) cin>>pre[i];
    PostOrder( 1 , n );
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
