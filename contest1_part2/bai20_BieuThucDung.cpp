#include<bits/stdc++.h> 
#define For(i,a,b) for(int i=a;i<=b;i++)
#define ll long long

using namespace std;

void Res(){
    string s;
    cin>>s;
    int n=s.length();
    int d1=0,d2=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='[') d1++;
        else d2++;
        if(d1<d2){
            for(int j=i+1;j<n;j++){
                if(s[j]=='['){
                    swap(s[i],s[j]);
                    ans+=j-i;
                    d1++;
                    d2--;
                    break;
                }
            }
        }
    }
    cout<<ans<<'\n';

}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
