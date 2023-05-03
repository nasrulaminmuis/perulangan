// Memasukkan library input/output
#include <iostream>

// Menggunakan namespace std untuk mempersingkat penulisan
using namespace std;

//Mendefinisikan fungsi utama
int main(){
  //Menampilkan teks "====Tampilan Data====" di layar
  cout << "===Tampilan Data===" << endl;
  //Menginisialisasi variabel i dengan nilai 1 dan melakukan perulangan selama i kurang dari atau sama dengan 9 dengan increment 2
  for ( int i = 1; i <=9 ; i+=2) {
    //Menampilkan nilai i di layar
    cout << i<< endl;
  }
  // Mengembalikan nilai 0 dan mengakhiri fungsi utama
    return 0;
} 