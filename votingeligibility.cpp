#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"input your age \n";
	cin>>age;
	if(age>=18)
	{cout<<"your age is :"<<age<<endl;
	cout<<"you are eligible for voting";
	}
	else
	{cout<<"your age is :"<<age<<endl;
	cout<<"you are not eligible for voting"<<endl;
	}
	return 0;
}
