#include<bits/stdc++.h> 
#define ll long long

using namespace std;

struct node{
    int element;
    node *l;
    node *r;
    node(int val){
        element = val;
        l = r = NULL;
    }
};

void Insert(node* &p,int val){
    if(p==NULL) p = new node(val);
    else{
        if(val<p->element) Insert(p->l,val);
        else Insert(p->r,val);
    }
}

void Postorder(node* p){
    if(p==NULL) return;
    Postorder(p->l);
    Postorder(p->r);
    cout<<p->element<<" ";
}

void Res(){
    int n;
    cin>>n;
    node* a = NULL;
    for( int i=1; i<=n ; i++ ){
        int x; 
		cin>>x;
        Insert(a,x);
    }
    Postorder(a);
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
