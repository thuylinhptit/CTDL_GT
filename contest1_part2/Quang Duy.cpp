#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n , a[101][101];

void Input(){
	cin >> n;
	for(int i = 1 ; i <= 1 ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cin >> a[i][j];
		}
	}
}

void Output(){
	int s = 1;
	for(int i = n ; i > 0 ; i--)
	{
		cout << "[";
		for(int j = 1 ; j <= s ; j++)
		{
			if(j - s == 0) cout << a[i][j] << "]";
			else cout << a[i][j] << " ";
		}
		cout << endl;
		s++;
	}
}

void DaySo1(){
	int s = n;
	for(int i = 1 ; i <= n ; i++)
	{
		int j = 1;
		while(j <= s)
		{
			a[i + 1][j] = a[i][j] + a[i][j + 1];
			j++;
		}
		s--;
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
		Input();
		DaySo1();
		Output();
	}
	return 0;
}
