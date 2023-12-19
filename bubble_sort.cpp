#include <iostream>

using namespace std;

int main(){
    int ar[5];

    for(int i = 0; i<5; i++){
        cin>> ar[i];
    }
    // Bubble Sort
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5-i-1; j++){
            if(ar[j] > ar[j+1]){
            swap(ar[j], ar[j+1]);
            }
        }
    }

    for(int i = 0; i<5; i++){
        cout <<ar[i] <<" ";
    }
    return 0;
}