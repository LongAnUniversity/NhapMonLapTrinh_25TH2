
#include <iostream>
using namespace std;
void cau1() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
	cout << "Tong tu 1 den " << n << " la: " << sum << endl;
}
void cau2() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int tich = 1;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    cout << "Tich tu 1 den " << n << " la: " << tich << endl;
}
void cau3() {
    int x, n;
	cout << "Nhap x va n: ";
    cin >> x >> n;
	int luythua = 1;
    for(int i=1; i<=n; i++) {
        luythua *= x;
	}
	cout << x << "^" << n << " la: " << luythua << endl;
}
void cau4() {
    int n;
	cout << "Nhap n: ";
	cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
void cau5() {
    int n;
	cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}
void cau6() {
    int n, tong=0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;            
        }
    }
	cout << "Tong cac uoc so cua " << n << " la: " << tong << endl;
}
void cau7() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    if(n == tong)
		cout << n << " la so hoan thien." << endl;
    else
		cout << n << " khong phai la so hoan thien." << endl;
}
void cau8() {
    int n, dem=0;
	cout << "Nhap n: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        if(n % i == 0) {
            dem++;
        }
	}
    if (dem == 2)
        cout << n << " la so nguyen to" << endl;
    else 
        cout << n << " khong la so nguyen to" << endl;
}
void cau9() {
    int n, dem = 0;
    cout << "Nhap n: ";
    cin >> n;
    cout << n;
    while (n > 0) {
        dem++;
        n /= 10;
    }
    cout << " co " << dem << " chu so" << endl;
}
void cau10() {
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    cout << "UCLN: " << a << endl;
}
void cau11() {
    int sotien;
    bool timthay = false;
    cout << "Nhap so tien: ";
    cin >> sotien;
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                if (i * 100000 + j * 200000 + k * 500000 == sotien) {
                    timthay = true;
                    cout << i << "x100000 + " << j << "x200000 + " << k << "x500000" << endl;
                }
            }
        }
    }
    if (timthay == false)
        cout << "Khong tim thay phuong an phu hop" << endl;
}
int main()
{
    cau11();
}
