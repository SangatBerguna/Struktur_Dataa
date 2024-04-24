#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nama;
    string prodi;
    string NIM;
    string tempat_tanggal_lahir;
    string agama; 
    string alamat;
};

int main(){

    mahasiswa mhs;

    mhs.nama="Giezka Prasetyo Wibowo";
    mhs.prodi="Teknik Informatika";
    mhs.NIM="202311004";
    mhs.tempat_tanggal_lahir="Pati, 8 Agustus 2003";
    mhs.agama="Islam"; 
    mhs.alamat="Trangkil jln. Dahlia RT6 RW7";
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"Nama                  : "<<mhs.nama<<endl;
    cout<<"prodi                 : "<<mhs.prodi<<endl;
    cout<<"NIM                   : "<<mhs.NIM<<endl;
    cout<<"Tempat Tanggal Lahir  : "<<mhs.tempat_tanggal_lahir<<endl;
    cout<<"Agama                 : "<<mhs.agama<<endl; 
    cout<<"Alamat                : "<<mhs.alamat<<endl;

    return 0;
}