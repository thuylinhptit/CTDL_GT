#include<bits/stdc++.h>
using namespace std;
int a[100][100];
vector<int> s;
vector< vector<int> > res;
main(){
    int n;
    cin>>n;
    res.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(j>i&&a[i][j]==1) {
                s.push_back(i);
                s.push_back(j);
                res[i].push_back(j);
                res[j].push_back(i);
            }

        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<' ';
    }
    cout<<endl;
    cout<<"Danh Sach Canh:"<<endl;
    for(int i=0;i<s.size();i++){
        if(i%2==1){
            cout<<s[i]+1<<endl;
        }
        else cout<<s[i]+1<<" ";
    }
    cout<<"Danh Sach Ke:"<<endl;
    for(int i=0;i<res.size();i++){
        cout<<"Ke "<< i + 1<<": "; 
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]+1<<" ";
        }
        cout<<endl;
    }
}
