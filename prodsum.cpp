//Give difference between product and sum of a number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;//123
    int prod = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;
        n = n/10;
    }
    int ans = prod - sum;
    cout<<"The difference between product and sum is: "<<ans;
}