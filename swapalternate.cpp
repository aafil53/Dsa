#include<iostream>
using namespace std;

int swapArray(int arr[], int size)
{
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    return 1;
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int arr[1000];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    swapArray(arr,n);
    printArray(arr,n);
    return 0;
}