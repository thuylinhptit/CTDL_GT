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
            else p->r = new node(x);
        }
        else{
            Insert(p->l,root,x,pos);
            Insert(p->r,root,x,pos);
        }
    }
}

void Show(node *p){
    queue<node* > q;
    stack<int> tmp;
    q.push(p);
    while(!q.empty()){
        node *t = q.front();
        q.pop();
        tmp.push(t->element);        
        if(t->r) q.push(t->r);
        if(t->l) q.push(t->l);
    }
    while(!tmp.empty()){
        cout<<tmp.top()<<" ";
        tmp.pop();
    }
}

void Sum(){
    int n;
    cin>>n;
    node *a = NULL;
    while(n--){
        int root,x;
        char pos;
        cin>>root>>x>>pos;
        if(a==NULL) {
            a = new node(root);
            Insert(a,root,x,pos);
        }
        else Insert(a,root,x,pos);
    }
    Show(a);
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
