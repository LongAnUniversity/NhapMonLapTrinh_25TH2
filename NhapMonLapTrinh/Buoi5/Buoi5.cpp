#include <iostream>
using namespace std;

int main()
{
	/*cout << "Nhap so: ";
	int n;
	cin >> n;
	if (n%2 == 0) {
		cout << "So " <<n<< " la so chan" << endl;
	}
	else {
		cout << "So " << n << " la so le" << endl;
	}*/

	cout << "Nhap nam: ";
	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " la nam nhuan" << endl;
	}
	else {
		cout << year << " khong phai la nam nhuan" << endl;
	}
}
