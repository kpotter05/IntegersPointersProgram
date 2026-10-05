#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Integer Pointer Demonstration\n\n";

	cout << "Please enter your favorite number: ";
	cin >> num1;

	cout << "Enter another integer: ";
	cin >> num2;

	cout << "Enter one final integer: ";
	cin >> num3;

	int* ptr1 = new int;
	int* ptr2 = new int;
	int* ptr3 = new int;

	*ptr1 = num1;
	*ptr2 = num2;
	*ptr3 = num3;

	cout << "\nVariable Values" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;

	cout << "\nPointer Addresses" << endl;
	cout << "ptr1 = " << ptr1 << endl;
	cout << "ptr2 = " << ptr2 << endl;
	cout << "ptr3 = " << ptr3 << endl;

	cout << "\nValues Stored in Dynamic Memory" << endl;
	cout << "*ptr1 = " << *ptr1 << endl;
	cout << "*ptr2 = " << *ptr2 << endl;
	cout << "*ptr3 = " << *ptr3 << endl;

	delete ptr1;
	delete ptr2;
	delete ptr3;

	ptr1 = nullptr;
	ptr2 = nullptr;
	ptr3 = nullptr;

	cout << "\nDynamic memory has been released successfully." << endl;

	return 0;
}
