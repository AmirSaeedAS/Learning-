#include <iostream>
//#include <string>
using namespace std;
int main()
{
	char ch;
	   cout<<"Enter character 'S' OR 's'for salary for senior salesperson and for junior's salary Enter 'J' OR'j' :";
	   cin>>ch;
	   if(ch=='S'||ch=='s')
	      cout<<"Salary of senior salesperson is:400";
	   else if (ch=='J'||ch=='j')
	      cout<<"Salary of junior salesperson is:275";
	   else 
	      cout<<"error";
}
