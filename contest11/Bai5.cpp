#include<bits/stdc++.h> 
#define ll long long;
using namespace std;

struct node{
    int element;
    node *l, *r;
    node(int value){
        element = value;
        l = r = NULL;
    }
};

void Insert(node *k,int r, int x, char p){
    if( k == NULL ){
        return;
    }
    else{
        if( k -> element == r ){
            if( p == 'L' && k -> l == NULL ) 
				k -> l = new node(x);
            else k -> r = new node(x);
        }
        else{
            Insert( k -> l , r , x , p );
            Insert( k -> r , r , x , p );
        }
    }
}

void Show(node *k){
    queue<node*> q;
    q.push(k);
    while( !q.empty() ){
        node *t = q.front(); q.pop();
        cout<< t -> element <<" ";
        if( t -> l ) q.push( t -> l );
        if( t -> r ) q.push( t -> r );
    }
}

void Res(){
    int n;
    cin>>n;
    node *a = NULL;
    while(n--){
        int r,x;
        char p;
        cin >> r >> x >> p;
        if(a == NULL ) {
            a = new node(r);
            Insert( a , r , x , p );
        }
        else Insert( a , r , x , p );
    }
    Show(a);
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
