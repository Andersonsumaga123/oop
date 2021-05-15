#include <iostream>
#include <conio.h>
using namespace std;
class karyawan{
 private:
  int karyawan_num;
  float karyawan_comp;
 public:
  void entData(){
   cout << "masukkan nomor karyawan ";
   cin >> karyawan_num;
   cout << "masukkan gaji karyawan " ;
   cin >> karyawan_comp;
  }
  void display(){
   cout << "karyawan nomor " << karyawan_num << endl;
   cout << "gaji karyawan " << karyawan_comp << endl;
  }
};
int main(){
 karyawan karyawan1, karyawan2, karyawan3;
 cout << "masukkan data untuk karyawan nomor 1" << endl;
 karyawan1.entData();
 cout << "masukkan data untuk karyawan nomor 2" << endl;
 karyawan2.entData();
 cout << "masukkan data untuk karyawan nomor 3" << endl;
 karyawan3.entData();
 cout << "Total Data yang dimasukkan adalah" << endl;
 karyawan1.display();
 karyawan2.display();
 karyawan3.display();
}
