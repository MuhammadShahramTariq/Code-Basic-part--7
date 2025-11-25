#include<iostream>
using namespace std;

int main()

 {
    for(int i=1; i<=5; i++) 
	{
       int sum=0;
      for(int j=1; j<=i; j++)
	   {
     sum+=j;
       cout<<j;
         if(j < i) 
	 {
      cout<<"+";
       }
    }
   cout<<"="<<sum<<endl;
    }
    return 0;
}
