#include<iostream>
using namespace std;
 
void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }cout<<endl;
    

}

 void swap(int arr[],int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    
 }
 int main(){
    int odd[5]={1,2,3,45,55};

    swap(odd,5);
    printarr(odd,5);

    return 0;
 }