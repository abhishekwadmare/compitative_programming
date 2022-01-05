#include<bits/stdc++.h>
using namespace std;

int main(){
	int z, y, a, b, c, t;
	cin >> t;

	while(t--){
		cin >> z >> y >> a >> b >> c;
		if((z - y) >= (a + b + c)){
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
		}
	}
	
	return 0;
}