#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const ll MAX = 1E7 + 5;
int k; 
string s;

int main() {
    int t; 
	cin >> t;
    while (t--) {
        priority_queue<int> q;
		cin >> k;
        cin >> s;
        int cnt[200] = { 0 };
    	for (int i = 0; i < s.length(); i++) { 
			cnt[s[i]] += 1; 
		}
    	sort(cnt, cnt + 200);
    	reverse(cnt, cnt + 200);
    	for (int i = 0; cnt[i] != 0; i++)    q.push(cnt[i]);
    	for (int i = 0; i < k; i++) {
        	int tmp = q.top();
        	q.pop();
        	tmp -= 1;
        	q.push(tmp);
    	}
    	ll res = 0;
    	while (!q.empty()) {
        	int tmp = q.top();
        	res += tmp * tmp;
        	q.pop();
    	}
    	cout << res << endl;
    }
    return 0;
}
