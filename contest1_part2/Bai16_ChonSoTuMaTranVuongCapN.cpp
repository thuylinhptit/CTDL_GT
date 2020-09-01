#include<bits/stdc++.h> 
#define ll long long
using namespace std;

int n,s,a[12][12],b[12];
int stop=0,ans=0;

void dem(){
    int t=0;
    for( int i=1; i<=n ; i++){
        t+=a[i][b[i]];
    }
    if(t==s){
        ans++;
    }
}
void out(){
    int t=0;
    for( int i=1; i<=n ; i++ ){
        t+=a[i][b[i]];
    }
    if(t==s){
        for( int i=1; i<=n ; i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}

void sinhhv(){
    int i=n-1;
    while(i>0&&b[i]>b[i+1]) i--;
    if(i==0) stop=1;
    else{
        int j=n;
        while(b[i]>b[j]) j--;
        swap(b[i],b[j]);
        int d=i+1,c=n;
        while(d<=c){swap(b[d],b[c]);d++;c--;}
    }
}


void Res(){
    cin>>n>>s;
    for( int i=1; i<=n ; i++) b[i]=i;
    for( int i=1; i<=n ; i++){
    	for( int j=1; j<=n ; j++){
    		cin>>a[i][j];
		}
	} 
    while(!stop){
        dem();
        sinhhv();
    }
    cout<<ans<<"\n";
    for( int i=1; i<=n ; i++) b[i]=i;
    stop=0;
    while(!stop){
        out();
        sinhhv();
    }
}
int main(){
    int test = 1;
    while(test--){
        Res();
    }
}
