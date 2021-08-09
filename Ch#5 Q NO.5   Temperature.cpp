#include<iostream>
#include<string>
using namespace std;
int main ()
{
	float num,num1,num2;
	char ch;
	cout<<"\tEnter a number as temperature:";
	cin>>num;
	cout<<"\tEnter character 'f' if temperature is in fahrenheit and convert it in celsius\n\tOR enter 'c' temperature is in celsius and convert it in fahrenheit:";
	cin>>ch;
    	if(ch=='f'||ch=='F')
    {	
		   num1=(num-32)*.5556;
		  cout<<"Temperature in Celsius:"<<num1<<"C";
	}
	else if(ch=='c'||ch=='C')
	{
		num1=(num*1.8)+32;
		cout<<"Temperature in Fahrenheit:"<<num1<<"F";
	}
	else
	  cout<<"error";
}

