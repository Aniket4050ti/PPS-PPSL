#include<iostream>
using namespace std;
int main() 
{
	int a;
	int b;
	int c;
	cout<< "put any three numbers:"<<endl;
	cin>> a;
	cin>> b;
	cin>> c;
	if(a>=b && a>=b)
	{
		cout<< "The largest number is:"<<a;
	}
	if(b>=a && b>=c)
	{
		cout<< "The largest number is:"<<b;
	}
	if(c>=a && c>=b)
	{
		cout<< "The largest number is:"<<c;
	}
	return 0;
}