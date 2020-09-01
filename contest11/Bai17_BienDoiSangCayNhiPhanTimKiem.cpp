#include<bits/stdc++.h> 
#define ll long long
using namespace std;

void Sum(){
    int n,root,a;
    char pos;
    cin>>n;
    vector<int> v;
    while(n--){
        cin>>root>>a>>pos;
        if(v.size()==0) {
            v.push_back(root);
            v.push_back(a);
        }
        else{
            v.push_back(a);
        }
    }
    sort(v.begin(),v.end());
    for( int i=0; i<v.size(); i++ ) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        Sum();
    }
}
