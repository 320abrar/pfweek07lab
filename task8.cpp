#include<iostream>
using namespace std;
float total(string city,string item,float quantity );
main()
{
    string city;
    cout<<"enter the city:";
    cin>>city;
    string item;
    cout<<"enter the item:";
    cin>>item;
    float quantity;
    cout<<"enter the quantity:";
    cin>>quantity;
    float result=total(city,item,quantity);
    cout<<result;


}
float total(string city,string item,float quantity )
{
    float total=0;
    if(city=="sofia" && item== "cofee")
    {
        total=0.50*quantity;
    }
     if(city=="sofia" && item== "water")
    {
        total=0.80*quantity;
    }
     if(city=="sofia" && item== "beer")
    {
        total=1.20*quantity;
    }
     if(city=="sofia" && item== "sweet")
    {
        total=1.45*quantity;
    }
     if(city=="sofia" && item== "peanuts")
    {
        total=1.60*quantity;
    }
    else if(city=="plovdiv" && item=="cofee")
    {
        total=0.40*quantity;
    }
    else if(city=="plovdiv" && item=="water")
    {
        total=0.70*quantity;
    }
    else if(city=="plovdiv" && item=="beer")
    {
        total=1.15*quantity;
    }
     else if(city=="plovdiv" && item=="sweet")
    {
        total=1.30*quantity;
    }
    else if(city=="plovdiv" && item=="peanuts")
    {
        total=1.50*quantity;
    }
    else if(city=="varna" && item=="cofee")
    {
        total=0.45*quantity;
    }
    else if(city=="varna" && item=="water")
    {
        total=0.70*quantity;
    }
    else if(city=="varna" && item=="beer")
    {
        total=1.10*quantity;
    }
    else if(city=="varna" && item=="sweet")
    {
        total=1.35*quantity;
    }
    else if(city=="varna" && item=="peanuts")
    {
        total=1.55*quantity;
    }
    return total;
    

    

}
