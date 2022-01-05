#include<bits/stdc++.h>
using namespace std;

int seat(int n){
	if(n % 2 != 0){
		return ((n / 2) + 1);
	} else {
		return (n / 2);
	}
}

int main(){
	int t, n, m;
	cin >> t;

	while(t--){
		cin >> n >> m;
		cout << seat(n) * seat(m) <<"\n";
	}


	return 0;
}
