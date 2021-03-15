#include <iostream>
#include <string.h>
using namespace std;


struct student {
    string nama, kehadiran, indeks;
    double tugas, kuis, uts, uas, hasil;
};


double nilaiakhir(int i, student siswa[]) { 
    return (siswa[i].tugas * 0.2) + (siswa[i].kuis * 0.1) + (siswa[i].uts * 0.3) + (siswa[i].uas * 0.4);
}

string nilaitertinggi(student siswa[], int jml) {
    string ket;
    int max = 0;
    for (int i = 0; i < jml; i++) {
        if (max < siswa[i].hasil) {
            max = siswa[i].hasil;
            ket = siswa[i].kehadiran;
        }
    }
    return ket;
}

int main(){
    const int jumlah_siswa = 10;
    student siswa[jumlah_siswa];
    int i;
    double hasil;


    i = 0;
    do {

        cout << "=====================================" << endl;
        cout << "\tDATA SISWA KE\t " << i+1 << endl;
        cout << "=====================================" << endl;

   

        cout << "Masukkan NAMA siswa ke-" << i+1 << endl;
        cin >> siswa[i].nama;

        cout << "Masukkan Kehadiran dari " << siswa[i].nama << ": ";
        cin >> siswa[i].kehadiran;
        cout << endl;

        cout << "Masukkan NILAI TUGAS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].tugas;
        cout << endl;

        cout << "Masukkan NILAI KUIS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].kuis;
        cout << endl;

        cout << "Masukkan NILAI UTS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].uts;
        cout << endl;

        cout << "Masukkan NILAI UAS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].uas;
        cout << endl;
      
        siswa[i].hasil = nilaiakhir(i, siswa);
      


        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "NAMA" << "\t" << "kehadiran" << "\t" << "TUGAS" << "\t" << "KUIS" << "\t" << "UTS" << "\t" << "UAS" << "\t" << "NILAI AKHIR" << "\t" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;

      
        siswa[i].hasil = nilaiakhir(i, siswa);
  

        cout << siswa[i].nama << "\t" << siswa[i].kehadiran << "\t" << "\t" << siswa[i].tugas << "\t" << siswa[i].kuis << "\t" << siswa[i].uts << "\t" << siswa[i].uas << "\t";
        printf("%.2f ", siswa[i].hasil);

        if(siswa[i].hasil >= 80){
            cout << " (A) " << endl;
        } else if(siswa[i].hasil >= 70){
            cout << " (B) " << endl;
        } else if(siswa[i].hasil >= 55){
            cout << " (C) " << endl;
        } else if(siswa[i].hasil >= 40){
            cout << " (D) " << endl;
        } else {
            cout << " (E) " << endl;
        }
        
        cout << endl;

        i = i + 1;
    } while (i < jumlah_siswa);



    cout << endl;
}
