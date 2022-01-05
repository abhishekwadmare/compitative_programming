#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	long long y, x;
	vector <long long> a;
	cin >> t;
	while(t--){
		cin>>n;
		y = 0;
		for(int i = 0; i < n; i++){
			cin>>x;
			a.push_back(x);
			for(int j = 0; j < i; j++){
				x = a[j] & a[i];
				y = y | x;
			}
		}
		cout << y << "\n";
		a.clear();
	}

	return 0;
}