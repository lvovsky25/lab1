#include <iostream>
using namespace std;
int main()
{ 
	int n, n1;
	cin >> n;
	cin >> n1;
	long long  a[n], a1[n1];
	int answer = 0;
	int answer1 = 0;
	for ( int i = 0; i < n; i ++) {
	cin >> a[i];
	}
	for ( int i = 0; i < n1; i ++) {
	cin >> a1[i];
	}
	for ( int i = 0; i < n1; i ++) {
		int l = 0, r = n - 1;
		bool found = false;
		while (l <= r) {
			int m = (l + r) / 2;
			if (a[m] == a1[i]) {
				answer = m + 1;
				r = m - 1; 
				found = true;
			}
			else if (a1[i] < a[m]) {
				r = m - 1;
			}
			else {
				l = m + 1;
			}
		}
		if (found){
			cout << answer << " ";
		}
		else {
			cout << "0" << endl;
		}
		 l = 0, r = n - 1;
		 bool found1 = false;
		while (l <= r) {
			int m = (l + r) / 2;
			if (a1[i] == a[m]) {
				answer1 = m + 1;
				l = m + 1;
				found1 = true;
			}
			else if (a1[i] < a[m]) {
				r = m - 1;
			}
			else {
				l = m + 1;
			}
			
		}
		if (found1){
			cout << answer1 << endl;
		}
	}
	
	
	return 0;
}
