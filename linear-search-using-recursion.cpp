#include<iostream>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}
bool search(int arr[],int size,int k){
        print(arr,size);

    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remaining=search(arr+1,size-1,k);
        return remaining;
    }
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=2;
    bool ans=search(arr,size,key);
    if(ans){
        cout<<"mil gaya!!!!"<<endl;
    }
    else{
        cout<<"bhag ja"<<endl;
    }
}