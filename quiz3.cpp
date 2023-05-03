// Memasukkan library input/output
#include <iostream>

// Menggunakan namespace std untuk mempersingkat penulisan
using namespace std;

// Mendefinisikan fungsi utama
int main(){
    // Mendeklarasikan variabel n, d, dan m bertipe int
    int n,d,m;
    // Menampilkan teks "contoh perulangan dinamis"
    cout << "contoh perulangan dinamis" << endl;
    // Menampilkan teks "--------------------------"
    cout << "--------------------------" << endl<<endl;
    // Menampilkan teks "masukkan banyaknya angka = "
    cout << "masukkan banyaknya angka = ";
    // Menerima input dari user dan menyimpannya di variabel n
    cin >> n;
    // Menampilkan baris kosong
    cout << endl;
    // Menampilkan teks "masukkan batas awal = "
    cout << "masukkan batas awal = ";
    // Menerima input dari user dan menyimpannya di variabel d
    cin >> d;
    // Menampilkan baris kosong
    cout << endl;
    // Menampilkan teks "masukkan angka kelipatan = "
    cout << "masukkan angka kelipatan = ";
    // Menerima input dari user dan menyimpannya di variabel m
    cin >> m;
    // Menampilkan baris kosong
    cout << endl;
    // Menampilkan teks "=========================="
    cout << "==========================" << endl;
    // Mendeklarasikan dan menginisialisasi variabel i bertipe int dengan nilai 1
    int i = 1;
    // Menampilkan karakter "["
    cout <<"[";
    // Membuat perulangan while dengan kondisi i kurang dari atau sama dengan n
    while(i<=n){
        // Menampilkan nilai dari variabel d dan spasi
        cout << d << " ";
        // Menambahkan nilai variabel d dengan nilai variabel m
        d+=m;
        // Menambahkan nilai variabel i dengan 1
        i++;
    }
    // Menampilkan karakter "]" dan baris baru
    cout <<"]"<<endl;
    // Menampilkan teks "selesai..."
    cout <<"selesai..."<<endl;
    // Mengembalikan nilai 0 dan mengakhiri fungsi utama
    return 0;
}