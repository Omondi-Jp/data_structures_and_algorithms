#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int i, a, b;
	 cout << "Operation Mode: " << endl;
	 cout << "1. Addition" << endl;
	 cout << "2. Subtraction" << endl;
	 cout << "3. Multiplication" << endl;
	 cout << "4. Division" << endl;
	 cout << "Please enter the operation mode: ";
	 cin >> i;
	 cout << "Please enter the first number: ";
	 cin >> a;
	 cout << "Please enter the second number: ";
	 cin >> b;
	 
	 if(i == 1)
 		cout <<"The result of " << a << " + " << b << " is " << a + b;
 	else if(i == 2)
 		cout <<"The result of " << a << " - " << b << " is " << a - b;
 	else if(i == 3)
 		cout <<"The result of " << a << " * " << b << " is " << a * b;
 	else if(i == 4)
 	{
 		if(b==0)
 		{
 			cout<<"Error! cannot divide by zero! ";
		
			cout << "\n Please enter the first number: ";
		 	cin >> a;
		 	cout << "Please enter the second number: ";
		 	cin >> b;
	
			cout <<"The result of " << a << " / " << b << " is " << a / b;
		}
		else if(b!=0)
		{
			cout <<"The result of " << a << " / " << b << " is " << a / b;
		}
	}
	
 	cout << endl;
	return 0;
}