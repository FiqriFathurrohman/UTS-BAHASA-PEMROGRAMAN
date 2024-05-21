#include <iostream>
using namespace std;

void menu() {
    cout << "Pilih operasi matematika:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih angka (1-4): ";
}

void tambah() {
    double a, b;
    cout << "Masukkan dua bilangan untuk penjumlahan:" << endl;
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua: ";
    cin >> b;
    cout << "Hasil penjumlahan: " << a + b << endl;
}

void kurang() {
    double a, b;
    cout << "Masukkan dua bilangan untuk pengurangan:" << endl;
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua: ";
    cin >> b;
    cout << "Hasil pengurangan: " << a - b << endl;
}

void kali() {
    double a, b;
    cout << "Masukkan dua bilangan untuk perkalian:" << endl;
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua: ";
    cin >> b;
    cout << "Hasil perkalian: " << a * b << endl;
}

void bagi() {
    double a, b;
    cout << "Masukkan dua bilangan untuk pembagian:" << endl;
    cout << "Bilangan pertama: ";
    cin >> a;
    cout << "Bilangan kedua: ";
    cin >> b;
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
    } else {
        cout << "Hasil pembagian: " << a / b << endl;
    }
}

int main() {
    int pilihan;
    menu();
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            tambah();
            break;
        case 2:
            kurang();
            break;
        case 3:
            kali();
            break;
        case 4:
            bagi();
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
