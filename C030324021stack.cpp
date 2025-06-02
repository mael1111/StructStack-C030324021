#include <iostream>
using namespace std;

#define max 5
string Data[max];
int top = 0;

bool isEmpty() {
    return (top == 0);
}

bool isFull() {
    return (top >= max);
}

void display() {
    if (!isEmpty()) {
        cout << "\nData Tersimpan: " << endl;
        for (int a = 0; a < top; a++) {
            cout << a + 1 << " . " << Data[a] << endl;
        }
    } else {
        cout << "Stack kosong!\n";
    }
    if (isFull()) {
        cout << "Stack Penuh\n";
    }
    cout << endl;
}

void push() {
    if (!isFull()) {
        cout << "Masukkan Data: ";
        cin >> Data[top];
        top++;
    } else {
        cout << "Stack sudah penuh!\n";
    }
}

void pop() {
    if (!isEmpty()) {
        top--;
        cout << "Data '" << Data[top] << "' telah dihapus.\n";
    } else {
        cout << "Stack kosong, tidak bisa melakukan Pop!\n";
    }
}

int main() {
    int pil;

    while (true) {
        cout << "\nMenu Utama\n1. Push\n2. Pop\n3. Tampilkan Stack\n4. Keluar\nPilih : ";
        cin >> pil;

        if (pil == 1) {
            push();
        } else if (pil == 2) {
            pop();
        } else if (pil == 3) {
            display();
        } else if (pil == 4) {
            cout << "Program selesai.\n";
            break;
        } else {
            cout << "Pilihan tidak valid!\n";
        }

        cout << "Tekan Enter untuk melanjutkan...\n";
        
    }
}
