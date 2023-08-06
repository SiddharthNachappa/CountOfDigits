#include<iostream>

using namespace std;

int main()
{
    int number, counter;
    cout<<"Enter the number";
    cin>>number;
    if(number == 0)
    {
        cout<<"The number is 0";
    }
    else
    {
        while(number > 0)
        {
            number = number / 10;
            counter++;
        }
        cout<<"The number of digits are :"<<counter;
        
    }
}
