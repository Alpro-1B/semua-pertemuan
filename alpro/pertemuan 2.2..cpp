#include <iostream>

using namespace std;

int main() {
     // Cara Ke-1 Tanpa Menggunakan Variabel Tambahan
     // Pemberian Nilai Dua Variabel Awal
     int firstValue = 10;
     int secondValue = 8;

     // Menampilkan Nilai Sebelum Pertukaran
     cout << "Nilai firstValue sebelum pertukaran: " << firstValue << endl;
     cout << "Nilai secondValue sebelum pertukaran: " << secondValue << endl << endl;

     // Menukar Nilai Tanpa Menggunakan Variabel Tambahan
     firstValue = firstValue + secondValue;    // 10 + 8 = 18
     secondValue = firstValue - secondValue;   // 18 - 8 = 10
     firstValue = firstValue - secondValue;    // 18 - 10 = 8

     // Menampilkan Nilai Setelah Pertukaran
     cout << "Nilai firstValue sesudah pertukaran: " << firstValue << endl;
     cout << "Nilai secondValue sesudah pertukaran: " << secondValue << endl;
     cout << "\n\n\n\n";






     // Cara Ke-2 Dengan Menggunakan Varibel Tambahan
     // Mereset Nilai
     firstValue = 10;
     secondValue = 8;

     // Menampilkan Nilai Sebelum Pertukaran
     cout << "Nilai firstValue sebelum pertukaran: " << firstValue << endl;
     cout << "Nilai secondValue sebelum pertukaran: " << secondValue << endl << endl;

     // Menukar Nilai Dengan Menggunakan Variabel Tambahan
     int thirdValue = firstValue;   // thirdValue = firstValue (10)
     firstValue = secondValue;      // firstValue = secondValue (8)
     secondValue = thirdValue;      // secondValue = thirdValue (10)

     // Menampilkan Nilai Setelah Pertukaran
     cout << "Nilai firstValue sesudah pertukaran: " << firstValue << endl;
     cout << "Nilai secondValue sesudah pertukaran: " << secondValue << endl;

     return 0;
}
