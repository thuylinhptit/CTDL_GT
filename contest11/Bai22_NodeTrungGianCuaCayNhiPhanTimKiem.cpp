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

int isLeaf(node *p){
    if(p==NULL) return 0;
    return (p->l==NULL && p->r==NULL);
}

int ans;

void Count(node *p){
    if(p==NULL) return;
    if(isLeaf(p)) return;
    ans++;
    Count(p->l);
    Count(p->r);
}

void Res(){
    int n;
    cin>>n;
    node* a = NULL;
    for( int i=1; i<=n ;i++ ){
        int x;
		cin>>x;
        Insert(a,x);
    }
    ans = 0;
    Count(a);
    cout<<ans<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Res();
    }
}
