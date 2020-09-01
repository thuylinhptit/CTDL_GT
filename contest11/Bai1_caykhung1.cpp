#include<bits/stdc++.h> 
#define ll long long

using namespace std;

int ok;
struct node{
    char element;
    node* left;
    node* right;
};

int isOperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/');
}
node* makeNode(char c){
    node* t = new node;
    t->element = c;
    t->left = NULL;
    t->right = NULL;
    return t;
}
void Result(node* p){
    if(p==NULL) return;
    Result(p->left);
    cout<<p->element<<" ";
    Result(p->right);
}

void built(string s){
    stack<node*> st;
    for(int i=0;i<s.length();i++){
        if(isOperator(s[i])){
            node* t1 = st.top(); st.pop();
            node* t2 = st.top(); st.pop();
            node* t = makeNode(s[i]);
            t->left = t2; 
			t->right = t1;
            st.push(t);
        }
        else{
            node* t = makeNode(s[i]);
            st.push(t);
        }
    }
    Result(st.top());
}
void Sum(){
    string s;
    cin>>s;
    built(s);
    cout<<'\n';
}
int main(){

    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
