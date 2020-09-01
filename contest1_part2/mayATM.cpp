#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
int n,s ;
vector < int > a;
void input(){
    cin >> n >> s; a.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void solve(){
    sort(a.begin(),a.end());
    int res = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(s > a[i]){
            int tmp = s/a[i];
            s -= tmp*a[i];
            res += tmp;
        }
    }
    cout << res ;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){ 
		input();
		solve();
		cout<<endl;
	}
    return 0;
}
