#include <iostream>
using namespace std;
int main() 
{
    int n;
	cin >> n;
	int a[n];
	int value;
	
	int count = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	
	}
	cin >> value;
	for(int i = 0; i < n; i++){
		if(a[i] == value){
			count++;	
		}
	}
	
	
    cout << count;
	return 0;
}
