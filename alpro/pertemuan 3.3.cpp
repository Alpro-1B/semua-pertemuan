#include <iostream>

using namespace std;

int main() {
    int pilihan;
    cout << "Pilih bangun datar (1. Persegi, 2. Persegi Panjang, 3. Segitiga): ";
    cin >> pilihan;

    double luas = 0.0;
    double alas, tinggi, sisi1, sisi2;

    switch (pilihan) {
        case 1: // Persegi
            double sisi;
            cout << "Masukkan panjang sisi: ";
            cin >> sisi;
            luas = sisi * sisi;
            break;
        case 2: // Persegi Panjang
            cout << "Masukkan panjang: ";
            cin >> sisi1;
            cout << "Masukkan lebar: ";
            cin >> sisi2;
            luas = sisi1 * sisi2;
            break;
        case 3: // Segitiga
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 1;
    }

    cout << "Luas adalah: " << luas << endl;

    return 0;
}
