#include<iostream>
using namespace std;
int main()
{
	int num;
	for(int i=1;i<=5;i++)
	{
		num=i;
		for(int k=1;k<=5;k++)
		{
			cout<<num<<" ";
			num=num+i;
		}
		cout<<endl;
	}
	return 0;
}