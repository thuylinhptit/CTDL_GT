#include<bits/stdc++.h> 
#define ll long long

using namespace std;

struct node{
    int element;
    node *l, *r;
    node(int val){
        element = val;
        l = r = NULL;
    }
};

void Insert(node *p,int root, int x, char pos){
    if(p==NULL){
        return;
    }
    else{
        if(p->element == root){
            if(pos == 'L' && p->l==NULL) p->l = new node(x);
            else if(pos == 'R' && p->r==NULL) p->r = new node(x);
        }
        else{
            Insert(p->l,root,x,pos);
            Insert(p->r,root,x,pos);
        }
    }
}

int ok = 1;

void check(node* p, node* k){
    if(p && k){
        if(ok==0) return;
        if((p==NULL && k) || (p && k==NULL)) ok = 0;
        else if(p->element != k->element) ok = 0;
        else {
            check(p->l,k->l);
            check(p->r,k->r);
        }
    }
}

void Sum(){
    int n,root,x;
    char pos;
    cin>>n;
    int m = n;
    node *a = NULL;
    node *b = NULL;
    for( int i=1; i<=n ; i++){
        cin>>root>>x>>pos;
        if(a==NULL) {
            a = new node(root);
            Insert(a,root,x,pos);
        }
        else Insert(a,root,x,pos);
    }
    cin>>n;
    for( int i=1; i<=n ; i++ ) {
        cin>>root>>x>>pos;
        if(b==NULL) {
            b = new node(root);
            Insert(b,root,x,pos);
        }
        else Insert(b,root,x,pos);
    }
    ok = 1;
    check(a,b);
    if( ok ) cout<<"1"<<endl;
    else cout<<"0"<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
