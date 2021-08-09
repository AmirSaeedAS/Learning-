#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number of code(between 1 to 5) to display disk drive manufacture:";
	cin>>num;
	  if(num==1)
	   cout<<"\tWestern Digital";
    	else if(num==2)
	     cout<<"\t3M Corporation";
    	else if(num==3)
	     cout<<"\tMaxell Corporation";
	   else if(num==4)
     	cout<<"\tSony Corporation";
	   else if(num==5)
    	cout<<"\tVerbatim Corporation";
	  else
	  cout<<"error\ncode between 1 to 5"; 
}
