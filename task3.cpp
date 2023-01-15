#include<iostream>
using namespace std;
float discount(float price,string day ,string month);
main()
{
    float price;
    cout<<"enter price";
    cin>>price;
    string day;
    cout<<"enter the day";
    cin>>day;
    string month;
    cout<<"enter the month";
    cin>>month;
    float result=discount(price,day,month);
    cout<<result;

}
float discount(float price,string day ,string month)
{
    float payable=price;
    if(day=="sunday" && month == "october" || month=="august" || month=="march")
    {
        payable=price-(price*10/100);
        return payable;
    }
    else if(day=="monday" && month=="november" || month=="december")
    {
         payable=price-(price*5/100);
        return payable;
    }
    return payable;

    
}
