#include<iostream>
#include<string>
using namespace std;
int main()
{
	float side,base,hight,x,area,y;
	cout<<"Enter the value of hight:";
	cin>>hight;
	cout<<"Enter the value of side:";
	cin>>side;
	cout<<"Enter the value of base:";
	cin>>base;
	cout<<"Entger 'S' for area of square and for area of triangle enter 'T'"<<endl;
	cin>>x;
    	if(x='S')
	  {
	  area=side*side;
	  cout<<"Area of square is :"<<area;
}
    	else if(x='T')
	{
	   y=1/2*base*hight;
	   cout<<"Area of Triangle is :"<<y;
}
	    else
	    cout<<"error";
	   
	   
}
