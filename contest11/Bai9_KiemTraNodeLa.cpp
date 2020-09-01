#include<bits/stdc++.h> 
#define ll long long;

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

int check(node *p){
    queue< pair<node*,int> > q;
    vector<int> leaft;
    q.push({p,1});
    while(!q.empty()){
        node *t = q.front().first;
        int lv = q.front().second;
        q.pop();
        if(t->l==NULL && t->r==NULL) {
            leaft.push_back(lv);
            if(leaft.size()>1 && leaft[0]!=lv) return 0;
        }
        if(t->l) q.push({t->l,lv+1});
        if(t->r) q.push({t->r,lv+1});
    }
    return 1;
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
    cout<<check(a)<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
