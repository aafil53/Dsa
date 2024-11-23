#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    for(int i =0;i<=31;i++)
    {
        if(ans<INT_MAX){
            ans = pow(2,i);
            if(ans == n){
                cout<<"True";
            }
        }
    }
    return false;

}