#include<iostream>
using namespace std;
main()
{
    int price;
    cout<<"enter the price";
    cin>>price;
    string brand;
    cout<<"enter the brand";
    cin>>brand;
    if(price<=1500 && brand=="outfitters")
    {
        cout<<"good";

    }
    else{
        cout<<"not good";
    }
}