#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

// Mengecek apakah stack kosong
bool isEmpty(){
    return (top == 0);
}

// Mengecek apakah stack penuh
bool isFull(){
    return (top >= max);
}

// Menampilkan isi stack
void display(){
    if(!isEmpty()){
        cout << "\nData Tersimpan: " << endl;
        for(int a = 0; a < top; a++){
            cout << a+1 << " . " << data[a] << endl;
        }
    } else {
        cout << "Stack kosong!\n";
    }
    if(isFull()){
        cout << "Stack Penuh\n";
    }
    cout << endl;
}

// Menambahkan data ke stack
void push(){
    if(!isFull()){
        cout << "Masukkan Data: ";
        cin >> data[top];
        top++;
    } else {
        cout << "Stack sudah penuh!\n";
    }
}

// Menghapus data dari stack
void pop(){
    if(!isEmpty()){
        top--;
        cout << "Data '" << data[top] << "' telah dihapus.\n";
    } else {
        cout << "Stack kosong, tidak bisa melakukan Pop!\n";
    }
}

int main(){
    int pil;
    
    while(true) {  // Looping menu agar berulang
        system("cls");
        cout << "Menu Utama\n1. Push\n2. Pop\n3. Tampilkan Stack\n4. Keluar\nPilih : ";
        cin >> pil;

        if(pil == 1){
            system("cls");
            push();
        } else if(pil == 2){
            pop();
        } else if(pil == 3){
            display();
        } else if(pil == 4){
            cout << "Program selesai.\n";
            break;
        } else {
            cout << "Pilihan tidak valid!\n";
        }
    }
}
