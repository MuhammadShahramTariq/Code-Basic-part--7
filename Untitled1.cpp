#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int x=2;
	while(x<=30)
	{
		x=x%2;
		sum+=x;
		x++;
		
	
}	cout<<"sum"<<sum<<endl;
	return 0;
}