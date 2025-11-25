#include<iostream>
using namespace std;
int main() {
	for(int i=1; i<=5; i++) {
	int sum=0;
		for(int j=1; j<=i; j++) {
			sum +=j;
		if(i==1){	
		cout<<j;
		}
		else{
			if(j==1){	
			cout<<j;
			}
			else{	
			cout<<"+";
			cout<<j;
			}
		}
			
	}
	cout<<"="<<sum<<endl;

}
}