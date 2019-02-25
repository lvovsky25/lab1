#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
    cout << endl;
	for(int i = 1; i < n; ++i)
	{
		for(int r = 0; r < n-i; r++)
		{
			if(a[r] > a[r+1])
			{
				
				swap(a[r],a[r+1]);
			}
		}
	}
	

	
	for(int i = 0; i < n; ++i)
	{
		cout << a[i] << " " ;
	}
	cout << endl;
	
	
	
	return 0;

}
