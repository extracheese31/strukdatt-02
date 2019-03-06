/*
Nama        : Natasya Rizky Maharani
NPM         : 140810180004
Deskripsi   : program ini menampilkan data gaji karyawan
Tahun       : 2019
*/

#include <iostream>
using namespace std;

struct data{
    char nip[12];
    char nama[30];
    int gol;
    int gaji;
};

typedef data pegawai[10];

void inputPegawai(pegawai& x, int& n){
    cout<<endl<<"INPUT DATA PEGAWAI"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Data pegawai ke-"<<i+1<<endl;
        cout<<"NIP      : "; cin>>x[i].nip;
        cout<<"Nama     : "; cin>>x[i].nama;
        cout<<"Golongan : "; cin>>x[i].gol;
        cout<<endl;
    }
}

void cetakDaftar (pegawai x, int n){
    cout<<"DATA PEGAWAI"<<endl;
    for (int i=0; i<n; i++){
        cout<<"Data pegawai ke-"<<i+1<<endl;
        cout<<"NIP      : "<<x[i].nip<<endl;
        cout<<"Nama     : "<<x[i].nama<<endl;
        cout<<"Golongan : "<<x[i].gol<<endl;
        cout<<endl;
    }
}

void gaji(pegawai& x, int n){
    for (int i=0; i<n; i++){

    switch(x[i].gol){
    case 1:
    x[i].gaji=2000000;
    break;

    case 2:
    x[i].gaji=3000000;
    break;

    case 3:
    x[i].gaji=5000000;
    break;

    case 4:
    x[i].gaji=8000000;
    break;
    }
    }
}

void rataGaji(pegawai& x, int n){
    int jumlahGaji=0;
    for (int i=0; i<n; i++){
        jumlahGaji+=x[i].gaji;
    }
    int ratarata=(jumlahGaji/n);
    cout<<endl<<"Rata-rata gaji : "<<ratarata;
}

void gajiTerendah(pegawai& x, int n){
    int posisi, gajirendah;
    for (int i=0; i<n-1; i++){
        posisi=i;
        for (int j=i+1; j<n; j++){
            if (x[posisi].gaji>x[j].gaji){
                posisi=j;
            }
        }
        swap(x[i].gaji, x[posisi].gaji);
    }
    gajirendah=x[0].gaji;
    cout<<endl<<endl<<"Gaji Terendah  : "<<gajirendah<<endl;
    for(int g=1; g<n-1; g++){
        if(x[g].gaji==gajirendah){
        cout<<"NIP      : "<<x[g].nip<<endl;
        cout<<"Nama     : "<<x[g].nama<<endl;
        cout<<"Golongan : "<<x[g].gol<<endl;
        cout<<endl;
        }
    }

}

void gajiTertinggi(pegawai& x, int n){
    int posisi, gajitinggi;
    for (int i=0; i<n-1; i++){
        posisi=i;
        for (int j=i+1; j<n; j++){
            if (x[posisi].gaji>x[j].gaji){
                posisi=j;
            }
        }
        swap(x[i].gaji, x[posisi].gaji);
    }
    gajitinggi=x[n-1].gaji;
    cout<<endl<<endl<<"Gaji Tertinggi  : "<<gajitinggi<<endl;
    for(int g=1; g<n-1; g++){
        if(x[g].gaji==gajitinggi){
        cout<<"NIP      : "<<x[g].nip<<endl;
        cout<<"Nama     : "<<x[g].nama<<endl;
        cout<<"Golongan : "<<x[g].gol<<endl;
        cout<<endl;
        }
}
}

void cariGaji(pegawai& x, int n){
    int gajicari;
    cout<<"CARI GAJI PEGAWAI"<<endl;
    cout<<"Masukkan gaji: "; cin>> gajicari;
    for(int i=0; i<n; i++){
        if(gajicari==2000000&&x[i].gol==1){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
        else if (gajicari==3000000&&x[i].gol==2){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
        else if (gajicari==5000000&&x[i].gol==3){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
        else if (gajicari==8000000&&x[i].gol==4){
            cout<<"NIP      : "<<x[i].nip<<endl;
            cout<<"Nama     : "<<x[i].nama<<endl;
            cout<<"Golongan : "<<x[i].gol<<endl;
            cout<<endl;
        }
    }
}

int main()
{
    pegawai x;
    int n, menu, gajitinggi, gajirendah;

    cout<<"Menu Data Pegawai"<<endl;
    cout<<"1. Data Pegawai"<<endl;
    cout<<"2. Cari Gaji Pegawai"<<endl;
    cout<<"3. Rata-rata Gaji"<<endl;
    cout<<"4. Gaji Terendah"<<endl;
    cout<<"5. Gaji Tertinggi"<<endl<<endl;

    cout<<"Masukkan menu: "; cin>>menu;

    cout<<"Input data terlebih dahulu"<<endl;
    cout<<"Masukkan jumlah pegawai: ";cin>>n;
    inputPegawai(x, n);
    gaji(x,n);

    switch(menu){
    case 1:
    cetakDaftar(x, n);
    break;

    case 2:
    cariGaji(x, n);
    break;

    case 3:
    rataGaji(x, n);
    break;

    case 4:
    gajiTerendah(x, n);
    break;

    case 5:
    gajiTertinggi(x, n);
    break;
    }
    return 0;
}
