// Memasukkan library input/output
#include <iostream>

// Menggunakan namespace std untuk mempersingkat penulisan
using namespace std;

// Mendefinisikan fungsi utama
int main(){
    // Membuat perulangan for dengan variabel i bertipe int dari 1 sampai 4
    for ( int i = 1 ; i <=4 ; i++)
    {
        // Membuat perulangan for bersarang dengan variabel j bertipe int dari 1 sampai i
        for (int j = 1; j <= i; j++)
        {
            // Menampilkan karakter "*" dan spasi
            cout << "*" << " ";
        }
        // Menampilkan baris baru
        cout << endl;
    }
    // Membuat perulangan for dengan variabel k bertipe int dari 1 sampai 3
    for ( int k = 1 ; k <=3 ; k++)
    {
        // Membuat perulangan for bersarang dengan variabel l bertipe int dari 3 sampai k
        for (int l = 3; l >= k; l--)
        {
            // Menampilkan karakter "*" dan spasi
            cout << "*" << " ";
        }
        // Menampilkan baris baru
        cout << endl;
    }
    // Mengembalikan nilai 0 dan mengakhiri fungsi utama
    return 0;
    
}

/*
di dalam perulangan for pertama, program membuat perulangan for bersarang dengan variabel j bertipe int dari 1 sampai i. Perulangan ini akan menghasilkan jumlah bintang sesuai dengan nilai i. Misalnya, jika i = 1, maka j akan mencetak 1 bintang. Jika i = 2, maka j akan mencetak 2 bintang. Dan seterusnya.
di dalam perulangan for kedua, program membuat perulangan for bersarang dengan variabel l bertipe int dari 3 sampai k. Perulangan ini akan menghasilkan jumlah bintang sesuai dengan nilai l. Misalnya, jika k = 1, maka l akan mencetak 3 bintang. Jika k = 2, maka l akan mencetak 2 bintang. Dan seterusnya.
*/