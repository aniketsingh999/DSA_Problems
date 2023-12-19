#include <iostream>
using namespace std;

int main(){
    int ar[5];
    int i,start,end,mid,key, flag = 0;
    for(i = 0; i<5; i++){
        cin>> ar[i];
    }
    cout<< "Enter the Element to search: ";
    cin>>key;

    start=0;
    end=4;
    // Binary Search
    while(start<end){
        mid = (start + end)/2;
        if(ar[mid] == key){
            cout<<"Found at "<<mid+1;
            flag++;
            break;
        }
        else if(ar[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    if(flag != 1){
        cout<<"Not Found";
    }
    return 0;
}