#include<bits/stdc++.h>
using namespace std;
int n;
int a[200][200];
int dd[200][200]={0};
int check=0;
vector<string> res;
void display(){
    for(int i =0 ; i<res.size() ; i++)
        cout << res[i];
    cout <<" ";
}

void Try(int h, int c ){
    if(h == n && c == n){
        display();
        check = 1;
        return;
    }
    if(h < n && a[h + 1][c] && dd[h + 1][c] == 0){
        res.push_back("D");
        dd[h+1][c] = 1;
        Try(h + 1 , c);
        res.pop_back();
        dd[h+1][c] = 0;    
    }
    if(c > 1 && a[h][c -1] && dd[h][c -1] == 0){
        res.push_back("L");
        dd[h][c -1] = 1;
        Try(h , c -1);
        res.pop_back();
        dd[h][c -1] = 0;
    }
    if(c < n && a[h][c + 1] && dd[h][c +1] == 0){
        res.push_back("R");
        dd[h][c +1] = 1;
        Try(h, c +1);
        res.pop_back();
        dd[h][c +1] = 0;
    }
    if(h > 1 && a[h -1][c] && dd[h -1][c] == 0){
        res.push_back("U");
        dd[h -1][c] = 1;
        Try(h -1, c);
        res.pop_back();
        dd[h -1][c] = 0;
    }
}

int main(){
    int t;   
	cin >> t;
    while(t--){
        cin >> n;
        check =0;
        for(int i = 1; i <= n; i++) 
			for(int j =1 ; j <= n; j++) 
				cin >> a[i][j];
        if(a[1][1] == 0) cout <<-1<<endl;
        else{
            dd[1][1] = 1;
            Try(1,1);
            if(check == 0) cout << -1;
            cout <<endl;
        }
    }
    return 0;
}
