#include<bits/stdc++.h> 
#define ll long long ;

using namespace std;

struct node{
    int element;
    node *l, *r;
    node(int val){
        element = val;
        l = r = NULL;
    }
};

void Insert(node *&p,int val){
    if(p==NULL) p = new node(val);
    else{
        if(p->element > val)  Insert(p->l,val);
        else if(p->element < val) Insert(p->r,val);
    }
}

void PreOrder(node *p){
    if(p){
        cout<<p->element<<" ";
        PreOrder(p->l);
        PreOrder(p->r);
    }
}

void Res(){
    int n,x;
    cin>>n;
    node *a = NULL;
    map<int,int> m;
    for( int i=1 ; i<=n ; i++ ){
        cin>>x;
        Insert(a,x);
    }
    PreOrder(a);
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
