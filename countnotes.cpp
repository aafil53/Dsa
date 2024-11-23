#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    cout<<"The number of notes are:"<<endl;
    switch(amount/100)
    {
        case 0: break;
        default:cout<<"100 rs notes - "<<amount/100<<endl;
                amount = amount%100;
    }
    switch(amount/50)
    {
        case 0: break;
        default:cout<<"50 rs notes - "<<amount/50<<endl;
                amount = amount%50;
    }
    switch(amount/20)
    {
        case 0: break;
        default:cout<<"20 rs notes - "<<amount/20<<endl;
                amount = amount%20;
    }
    switch(amount/1)
    {
        case 0: break;
        default:cout<<"1 rs notes - "<<amount/1<<endl;
        amount = amount%1;

    }
    return 0;

}