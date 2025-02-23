#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;

    // Nhập số từ người dùng
    cout << "Nhập một số nguyên dương: ";
    cin >> n;

    // Kiểm tra tính hợp lệ của số nhập vào
    if (n <= 0) {
        cout << "Vui lòng nhập một số nguyên dương!" << endl;
    }
    else {
        // Kiểm tra số nguyên tố
        if (isPrime(n))
            cout << n << " là số nguyên tố." << endl;
        else
            cout << n << " không phải là số nguyên tố." << endl;
    }
    int year;
    
    cout << "Nhập vào năm: ";
    cin >> year;
    
    if (isLeapYear(year)) {
        cout << year << " là năm nhuận." << endl;
    } else {
        cout << year << " không phải là năm nhuận." << endl;
    }
    return 0;
}
