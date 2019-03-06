/*
Nama        : Natasya Rizky Maharani
NPM         : 140810180004
Deskripsi   : program ini menampilkan data bioskop
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};
int main()
{
    Theater Theater;
    Theater.room = 7;
    strcpy(Theater.seat,"J9");
    strcpy(Theater.movieTitle,"Adit&Jarwo");

    cout<<Theater.room<<endl;
    cout<<Theater.seat<<endl;
    cout<<Theater.movieTitle<< endl;
    return 0;
}
