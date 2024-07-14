#include<iostream>
using namespace std;

int main(void)
{
	int num, digit1, digit2;
	
	cout << "Enter a number: ";
	cin  >> num;
	
	digit1 = num % 10;
	digit2 = num / 10;
	
	cout << digit1 << digit2;
	
	
	return 0;
}
