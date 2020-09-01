#include<bits/stdc++.h> 
#define ll long long

using namespace std;

struct node{
    int element,ok;
    node *l, *r;
    node(int val){
        ok = 0;
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
            if(p->l && p->r) p->ok = 1;
        }
        else{
            Insert(p->l,root,x,pos);
            Insert(p->r,root,x,pos);
        }
    }
}

int Similar(node *p){
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

int isLeaf(node* p){
    if(p->l==NULL && p->r==NULL) return 1;
    return 0;
}

int check = 1;

void Two(node* p,int k){
    if(check==0) return;
    if(p==NULL) return;
    if(p->ok == 0 && k>0 && !isLeaf(p)) check = 0;
    else{
        Two(p->l,k+1);
        Two(p->r,k+1);
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
    check = 1;
    Two(a,0);
    if( check && Similar(a) ){
    	cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
   
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
