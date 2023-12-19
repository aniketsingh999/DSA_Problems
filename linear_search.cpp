#include <iostream>
using namespace std;

int main(){
    int ar[5];
    int i,key,flag = 0;
    for(i = 0; i<5; i++){
        cin>> ar[i];
    }
    cout<< "Enter the Element to search: ";
    cin>>key;
    // Linear Search
    for(i = 0; i < 5; i++){
        if(ar[i]==key){
            cout<<"Found at "<<i+1;
            flag++;
            break;
        }
    }
    if(flag != 1){
        cout<<"Not Found";
    }
    return 0;
}