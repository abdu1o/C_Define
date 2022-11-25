#include <iostream>
using namespace std;

#define max(num1, num2) if (num1 > num2) cout << "Num1 > num2"; else if (num1 < num2) cout << "Num2 > num1"; else cout << "Num1 = num2";
#define even(num) if(num % 2 == 0) cout << "Even"; else cout << "Odd";

int main()
{
	
	int num1, num2, num;

	cout << "Enter num1, num2: ";
	cin >> num1 >> num2;

	max(num1,num2);
	cout << endl;

	cout << "Enter number: ";
	cin >> num;

	even(num);
	cout << endl;
}

