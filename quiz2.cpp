// Memasukkan library input/output
#include <iostream>

// Menggunakan namespace std untuk mempersingkat penulisan
using namespace std;

//Mendefinisikan fungsi utama
int main(){
    // Membuat perulangan dengan variabel i bertipe char dari 'a' sampai 'd'
    for ( char i = 'a'; i <='d' ; i++)
    {
        // Menampilkan data ke-i dan nilai numeriknya dengan mengurangi 96 dari nilai ASCII-nya
        cout << "Data Ke-"<<i<<" = "<<int(i)-96 << endl;
    }
    // Mengembalikan nilai 0 dan mengakhiri fungsi utama
    return 0;
    
}

/*
indeks perulangan bisa berupa huruf. 
hanya perlu mengubah tipe data dari variabel perulangan menjadi char (untuk C++) dan menggunakan fungsi untuk mengubah nilai ASCII menjadi karakter atau sebaliknya.

*/