#include<iostream>
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
