#include<iostream>
#include<cmath>
using namespace std;

class Calculator
{	
public :
	double num1;
	double num2;
	double result;
	int choice;
	void add()
	{	
		cout<<"Enter first Number"<<endl;
		cin>>num1;
		cout<<"Enter second number"<<endl;
		cin>>num2;
		result = num1 + num2;
		cout<<"Addition = "<<result<<endl;
		
			
	}
	void mul()
	{	
		cout<<"Enter first Number"<<endl;
		cin>>num1;
		cout<<"Enter second number"<<endl;
		cin>>num2;
		result = num1 * num2;
		cout<<"Multiplication = "<<result<<endl;
			
	}
	void sub()
	{	
		cout<<"Enter first Number"<<endl;
		cin>>num1;
		cout<<"Enter second number"<<endl;
		cin>>num2;
		result = num1 - num2;
		cout<<"Subtraction = "<<result<<endl;
			
	}
	void div()
	{	
		cout<<"Enter first Number"<<endl;
		cin>>num1;
		cout<<"Enter second number"<<endl;
		cin>>num2;
		result = num1 / num2;
		cout<<"Division = "<<result<<endl;
			
	}
	

	
};

int main()
{
	Calculator c;
	
	do
	{
		cout<<"!!!!!!!!!!!!!!!!!!!!!Calcutaor!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
		cout<<"Enter 1 for addition\n";
		cout<<"Enter 2 for subbtraction\n";
		cout<<"Enter 3 for multiplication\n";
		cout<<"Enter 4 for division\n";
		cout<<"Enter 5 for exit\n";
		cin>>c.choice;
		
		
		   
		
		
		switch(c.choice)
		{	
			
			
			
			case 1 : c.add();
			break;
			case 2 : c.sub();
			break;
			case 3 : c.mul();
			break;
			case 4 : c.div();
			break;
			case 5 : exit(10);
			default: 
			cout<<"Wrong choice";
			
			}			
			
	}while(1);
	return 0;
	
	
	
}
