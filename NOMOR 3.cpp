#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "MASUKKAN JUMLAH BARIS : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Membuat spasi sebanyak (n - i) untuk setiap baris
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        // Membuat bintang sebanyak i untuk setiap baris
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << "\n";
    }

    return 0;
}
