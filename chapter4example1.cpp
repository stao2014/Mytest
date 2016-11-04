#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Please input a number:  ";
	cin>>number;

	cout << uppercase
	     <<"  octal     \t  decimal  \t  hexdecimal\n"
	     << oct << number << "     \t "
	     << dec << number << "     \t "
	     << hex << number << endl;

	return 0;
}
