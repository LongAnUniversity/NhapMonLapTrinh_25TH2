#include <iostream>
using namespace std;
void cau1() {
	float a;
	cout << "Nhap dien: ";
	cin >> a;
	if (a >= 5) {
		cout << "Dau" << endl;
	}
	else
	{
		cout << "Rot" << endl;
	}
}
void cau2() {
	float dtb;
	cout << "Nhap diem trung binh: ";
	cin >> dtb;
	if (dtb >= 8) {
		cout << "Gioi" << endl;
	}
	else {
		if (dtb >= 7) {
			cout << "Kha" << endl;
		}
		else {
			if (dtb >= 5) {
				cout << "Trung binh" << endl;
			}
			else {
				cout << "Yeu" << endl;
			}
		}

	}

}
void cau3() {
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;
	if (thang == 1) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 2) {
		cout << "Thang " << thang << " co 28 hoac 29 ngay" << endl;
	}
	else if (thang == 3) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 4) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else if (thang == 5) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 6) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else if (thang == 7) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 8) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else if (thang == 9) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 10) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else if (thang == 11) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 12) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else {
		cout << "1 nam chi co 12 thang, vui long nhap lai." << endl;
	}
}

void cau4() {
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
		cout << "Thang " << thang << " co 31 ngay" << endl;
	}
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
		cout << "Thang " << thang << " co 30 ngay" << endl;
	}
	else if (thang == 2) {
		cout << "Thang " << thang << " co 28 hoac 29 ngay" << endl;
	}
	else {
		cout << "1 nam chi co 12 thang, vui long nhap lai." << endl;
	}
}
void cau5_1() {
	//Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c?
	float a, b, c;
	cout << "Nhap 3 so a, b, c: ";
	cin >> a >> b >> c;
	if (a > b && a > c) {
		cout << "So lon nhat la: " << a << endl;
	}
	else if (b > a && b > c) {
		cout << "So lon nhat la: " << b << endl;
	}
	else {
		cout << "So lon nhat la: " << c << endl;
	}
}
void cau5_2() {
	float a, b;
	cout << "nhap 2 so a, b: ";
	cin >> a >> b;
	if (a > 0 && b > 0) {
		cout << "hai so duong " << endl;
	}
	else if (a < 0 && b < 0) {
		cout << "hai so am " << endl;
	}
	else {
		cout << "hai so khac dau: " << endl;
	}

}
void cau5_3() {
	double a, b;
	cout << "Nhap 2 so a, b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh vo so nghiem" << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	else {
		double x = -b / a;
		cout << "Phuong trinh co 1 nghiem: x = " << x << endl;
	}
}

void cau5_4() {
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;

	if (thang >= 1 && thang <= 3) {
		cout << "Thang thuoc quy 1";
	}
	else if (thang >= 4 && thang <= 6) {
		cout << "Thang thuoc quy 2";
	}
	else if (thang >= 7 && thang <= 9) {
		cout << "Thang thuoc quy 3";
	}
	else if (thang >= 10 && thang <= 12) {
		cout << "Thang thuoc quy 4";
	}
}

void cau5_5() {
	float a, b, c;
	cout << "Nhap canh a:";
	cin >> a;
	cout << "Nhap canh b:";
	cin >> b;
	cout << "Nhap canh c:";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c)
			cout << "Tam giac deu";
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			cout << "Tam giac vuong";
		else if (a == b || a == c || b == c) {
			cout << "Tam giac can";
		}
		else {
			cout << "Tam giac thuong";
		}
	}
	else {
		cout << "Ba canh khong tao thanh tam giac";
	}
}
int main()
{
	cau5_5();
}
