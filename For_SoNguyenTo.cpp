#include <iostream>

using namespace std;

int main() {
    int N;

    // Nhap gia tri N
    cout << "Nhap N: ";
    cin >> N;

    // Kiem tra va in ra cac so nguyen to trong khoang (1, N)
    cout << "Cac so nguyen to tu 2 den " << N - 1 << " la: ";

    for (int num = 2; num < N; num++) { // Duyet tu 2 den N-1
        bool laNguyenTo = true;

        // Kiem tra num co phai so nguyen to khong
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                laNguyenTo = false;
                break; // Thoat vong lap neu tim thay uoc so
            }
        }

        // Neu la so nguyen to thi in ra
        if (laNguyenTo) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
