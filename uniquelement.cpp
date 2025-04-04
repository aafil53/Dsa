#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5] = {1,2,1,3,2}; // 1 and 2 are repeating, 3 is unique
    cout<<unique(arr,5);
    return 0;
}