#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=n; j>=i; j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	

	return 0;
}