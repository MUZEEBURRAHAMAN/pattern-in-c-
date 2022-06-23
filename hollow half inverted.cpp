#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	for(int i=n; i>0; i--)
	{
		if(i==1 || i==n)
		{
		for(int j=1; j<=i; j++)
		{
		cout<<"*";	
			
		}
		}
		else
		{
			for(int j=1; j<=i; j++)
			{
				if(j==1||j==i)
				{
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	

	return 0;
}