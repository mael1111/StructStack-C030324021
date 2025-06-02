#include <iostream>
using namespace std;

#define max 5
int top = 0;

bool isFull(){
    if(top >= max){
        return true;
    }else{
        return false;
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