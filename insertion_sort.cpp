#include <iostream>

using namespace std;

int main(){
    int ar[5];
    int i,j,key;
    for(i = 0; i<5; i++){
        cin>> ar[i];
    }
    // Insertion Sort
    for(i = 1; i < 5; i++){
        key = ar[i];
        j=i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1] = ar[j];
            j=j-1;
        }
        ar[j+1] = key;
    }

    for(i = 0; i<5; i++){
        cout <<ar[i] <<" ";
    }
    return 0;
}