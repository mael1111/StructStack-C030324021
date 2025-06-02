#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa *IlmaHasanah= new mahasiswa; 

    IlmaHasanah->nim = "C030324021";
    IlmaHasanah->nama = "Elma";
    IlmaHasanah->alamat = "Jl. Kuin Cerucuk, gang Ami";
    IlmaHasanah->ipk = 4.0;

    cout << IlmaHasanah->nim << "\n";
    cout << IlmaHasanah->nama << "\n";
    cout << IlmaHasanah->alamat << "\n";
    cout << IlmaHasanah->ipk << "\n";

    delete IlmaHasanah; 
    return 0;
}