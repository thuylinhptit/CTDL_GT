#include<iostream>
using namespace std;

int a[100],n;

int main(){
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		int c = 0;
		int n= x.length();
		for(int i= n-1; i >= 0; --i){
			if(x[i] == '0'){
				x[i] = '1';
				c = 1;
				for(int j=i+1; j< n; ++j)
					x[j] = '0';
					break;
			}			
		}
		if(c == 1)	cout << x<<endl;
		else 
			{
			for(int i = 0; i< n; ++i)	cout << 0;
			cout << endl;}
	}

	return 0;
}
