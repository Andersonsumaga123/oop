#include <iostream>
#include <conio.h>
using namespace std;
char getWhatTheyWant();
class tollBooth{
 private:
  unsigned int numCars;
  double amount;
 public:
  tollBooth(){
   numCars = 0;
   amount = 0;
  }
  void payingCar(){
   numCars++;
   amount+=0.5;
  }
  void noPayCar(){
   numCars++;
  }
  void display() {
   cout << "jumlah mobil yang lewat: " << numCars << endl;
   cout << "total yang didapat : " << amount << endl;
  }
};
int main(){
  tollBooth booth;
 char whatTheyWant;
 whatTheyWant = getWhatTheyWant();
  while(whatTheyWant!='s'){
  switch(whatTheyWant){
   case('p'):
    cout << "bayar" << endl << endl;
    booth.payingCar();
    whatTheyWant = getWhatTheyWant();
    break;
   case('n'):
    cout << "tidak bayar" << endl << endl;
    booth.noPayCar();
    whatTheyWant = getWhatTheyWant();
    break;
   case('s'):
    cout << "hasil/jumlah" << endl << endl;
    break;
   default:
    cout << "Invalid" << endl;
  }
 }
 booth.display();
}

char getWhatTheyWant(){
 char a;
 cout << "tekan 'p' untuk bayar" << endl;
 cout << "tekan 'n' untuk tidak bayar" << endl;
 cout << "tekan 's' tunjukkan hasil/jumlah dan keluar" << endl;
 cout << "pilih" << endl;
 a = getch();
 return a;
}
