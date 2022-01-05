#include<bits/stdc++.h>
using namespace std;

bool same(int x, int y){
	if(x % 2 == y % 2){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int t, n, x, y;
	cin >> t;

	while(t--){
		cin >> n >> x >> y;
		if(same(x, y)){
			cout << 0 << "\n";
		} else {
			cout << 1 << "\n";
		}
	}

	return 0;
}
