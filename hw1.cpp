#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	while(n!=1)
	{
      if(n%2!=0)
        {
		  n=3*n+1; 
	      cout<<n<<"\t";
		}
	  else
        {
		  n=n/2;
		  cout<<n<<"\t";
		}
	}
    return 0;
}
