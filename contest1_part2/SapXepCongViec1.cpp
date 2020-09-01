#include<bits/stdc++.h>
#define ll long long 

using namespace std;

struct sapxep
{
    int l;
    int r;
};

bool cmp(sapxep a , sapxep b){
    return a.r < b.r;
}

int main(){
    int t; 
	cin >> t;
    while(t--){
        int n;
    	cin >> n;
    	sapxep s[n+5];
    	for(int i=0;i<n;i++) cin >> s[i].l;
    	for(int i=0;i<n;i++) cin >> s[i].r;
    	sort(s,s+n,cmp);
    	int tmp=0;
    	int ans=1;
    	for(int i=1;i<n;i++){
        	if(s[i].l>=s[tmp].r){
            	ans++;
            	tmp=i;
        	}
    	}
    	cout << ans<<endl;
    }
    return 0;
}
