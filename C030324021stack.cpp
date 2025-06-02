#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool isEmpty(){
    if(top == 0){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(top >= max){
        return true;
    }else{
        return false;
    }
}

void display(){

}

void push(){
    if(!isFull()){
        cout << "Masukkan Data: ";
        cin >> data[top];
        top++;
    } else {
        cout << "Stack sudah penuh!\n";
    }
}

int main (){
    int pil; 
    string isi;

    stack :
        cout << "Menu Utama\n1. Push\n1. Pop\nPilih :";
        cin >> pil;
    
    if(pil == 1){
        cout << "Push";
    } else if(pil == 2){
        cout << "Pop";
    }
}