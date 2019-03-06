/*
Nama        : Natasya Rizky Maharani
NPM         : 140810180004
Deskripsi   : program ini menampilkan data orang
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct orang{
    int umur;
    char nama[30];
    char JK [1];
    char goldar [1];
};

int main()
{
    orang orang;
    orang.umur=10;
    strcpy(orang.nama,"Adudu");
    strcpy(orang.JK,"p");
    strcpy(orang.goldar,"A");

    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<<endl;
    cout<<orang.JK<<endl;
    return 0;
}
