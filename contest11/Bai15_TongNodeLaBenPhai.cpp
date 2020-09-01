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
int isLeaf(node* p){
    if(p==NULL) return 0;
    return (p->l==NULL && p->r==NULL);
}

int sum;

void SumLeft(node* p, int dir){
    if(p){
        if(isLeaf(p) && dir) sum += p->element;
        SumLeft(p->l,0);
        SumLeft(p->r,1);
    }
}

void Sum(){
    int n,root,x;
    char pos;
    cin>>n;
    node *a = NULL;
    map<int,node*> m;
    while(n--){
        cin>>root>>x>>pos;
        node *parent;
        if(m.find(root) == m.end()){
            parent = new node(root);
            m[root] = parent;
            if(a == NULL) a = parent;
        }
        else parent = m[root];
        node *child = new node(x);
        if(pos=='L') parent->l = child;
        else parent->r = child;
        m[x] = child;
    }
    sum = 0;
    SumLeft(a,0);
    cout<<sum<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
