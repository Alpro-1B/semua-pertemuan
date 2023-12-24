#include <iostream>

using namespace std;

int main() {

     // Penamaan Variabel Untuk Jumlah Bebek (N) dan Jumlah Teman (M)
     int N, M;

     // Meminta User Untuk Memasukan Jumlah Bebek
     cout << "Masukkan jumlah bebek (N): ";
     cin >> N;

     // Meminta User Untuk Memasukan Jumlah Teman
     cout << "Masukkan jumlah teman (M): ";
     cin >> M;

     // Menghitung Banyak Bebek Yang Didapatkan Masing-Masing Teman Dengan Cara Membagi Jumlah Bebek (N) Dengan Jumlah Teman (M)
     int bebekPerTeman = N / M;
     // Menghitung Banyak Bebek Pak Tatang Yang Tersisa Dengan Metode Modulus (Sisa Bagi = Sisa Bebek)
     int sisaBebek = N % M;

     // Menampilakan Banyak Bebek Yang Didapat Teman Pak Tatang
     cout << "Setiap teman akan mendapatkan : " << bebekPerTeman << " ekor bebek." << endl;
     // Menampilkan Sisa Bebek Pak Tatang
     cout << "Sisa bebek yang tidak dibagi : " << sisaBebek << " ekor bebek.";

     return 0;
}
