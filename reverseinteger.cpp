//Reverse an integer and return 0 if not in range[-2^31,2^31-1]
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
        ans = ans*10 + digit;
        n = n/10;
    }
    cout<<"Reverse of the integer is: "<<ans<<endl;
}