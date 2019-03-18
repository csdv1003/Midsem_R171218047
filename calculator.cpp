#include<iostream>
using namespace std;
class calculator
{
	public:
		int a,b;
		int add()
		{
			int sum;
			sum=a+b;
			return sum;
		}
		int diff()
		{
			int dif;
			dif=a-b;
			return dif;
		}
		int mul()
		{
			int prod;
			prod=a*b;
			return prod;
		}
		int div()
		{
			int quot;
			quot=a/b;
			return quot;
		}
			
};	//Added function definitions

int main()
{
	calculator obj;
	cout<<"Please enter two numbers"<<endl;
	cin>>obj.a>>obj.b;
	int s,d,p,q;
	cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division"<<endl;
	int choice;
	cin>>choice;
	switch (choice)
	{
		case 1: s=obj.add();
			cout<<"Sum= "<<s<<endl;
			break;
		case 2: d=obj.diff();
			cout<<"Difference= "<<d<<endl;
			break;
		case 3: p=obj.mul();
			cout<<"Product= "<<p<<endl;
			break;
		case 4: q=obj.div();
			cout<<"Division= "<<1<<endl;
			break;
		default: cout<<"Please enter a valid choice"<<endl;
	}
	return 0;
}  //Added main function

