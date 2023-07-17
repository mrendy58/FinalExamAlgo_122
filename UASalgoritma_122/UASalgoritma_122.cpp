#include <iostream>
#include <string>
using namespace std;

// jawaban
const int MAX_MAHASISWA = 100 ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

// jawaban
void tambahMahasiswa() {
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
}
 // jawaban
void tampilkanSemuaMahasiswa() {
    cout << "========== DAFTAR MAHASISWA ==========" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "NIM       : " << NIM[i] << endl;
        cout << "Nama      : " << nama[i] << endl;
        cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
        cout << endl;
    }
}

// jawaban
void algorithmacariMahasiswaByNIM() {
    int cariNIM;
    bool ditemukan = false;
    cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> cariNIM;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (NIM[i] == cariNIM) {
            cout << "NIM       : " << NIM[i] << endl;
            cout << "Nama      : " << nama[i] << endl;
            cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
            cout << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan) {
        cout << "Mahasiswa dengan NIM " << cariNIM << " tidak ditemukan." << endl;
    }
}
// jawaban
void algorithmaSortByTahunMasuk() {
    cout << "========== DAFTAR MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;
   

    
}
int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            algorithmacariMahasiswaByNIM();
            break;
        case 4:
            algorithmaSortByTahunMasuk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);
    return 0;
}




// 2. - algoritma perulangan do while, insertion

// 3. algoritma stack adalah algoritma mengoleksi data dengan sistem last in first out(lifo) atau yang terakhir masuk yang pertama keluar dan queue adalah algoritma kebalikan dari algoritma stack atau first in first out
//4. untuk undo dan redo dibatasi dimana ketika fungsi di eksekusi maka informasi akan di hapus kemudian stack dan pemograman akan kembali ke fungsi sebelumnya
//5. a. memiliki kedalaman 5 level 

      