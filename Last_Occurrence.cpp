#include <iostream>

using namespace std;

int main() {
	int n, m, i, j;
	cin >> n >> m;
	int a[n];		
  //input in array
	for (i=0; i<n; i++)
		cin >> a[i];
  
  //start from last and print index+1 when matched
	for (j=n-1; j>=0; j--)
	{
		if (a[j]==m)
			{cout << j+1;
			break;}
	}
	return 0;
}
