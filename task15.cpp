#include<iostream>
using namespace std;
float chek(string fruit,string day,float quantity,float price);
main()
{
    string fruit;
    cout<<"enter the name of fruit:";
    cin>>fruit;
    string day;
    cout<<"enter the day:";
    cin>>day;
    float quantity;
    cout<<"enter the quantity:";
    cin>>quantity;
    float price;
    float result=chek(fruit,day,quantity,price);
    cout<<result;

}
float chek(string fruit,string day,float quantity,float price)
{
    if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="banana")
    {
        price=quantity*2.50;
    }
     if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="apple")
     {
        price=quantity*1.20;
     }
     if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="orange")
     {
        price=quantity*0.85;
     }
     if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="grapefruit")
     {
        price=quantity*1.45;
     }
     if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="kiwi")
     {
        price=quantity*2.70;
     }
     if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="pineapple")
     {
        price=quantity*5.50;
     }
      if((day=="monday" || day=="tuesday" || day=="thursday" || "wednesday" || day=="friday")&&fruit=="grapes")
     {
        price=quantity*3.85;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="banana")
     { 
        price=quantity*2.70;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="apple")
     {
        price=quantity*1.25;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="orange")
     {
        price=quantity*0.90;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="grapefruit")
     {
        price=quantity*1.60;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="kiwi")
     {
        price=quantity*3.0;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="pineapple")
     {
        price=quantity*5.60;
     }
     if((day=="sunday" || day=="saturday" )&&fruit=="grapes")
     {
        price=quantity*4.20;
     }
     if(day!="sunday" && day!="saturday" && day!="monday" && day!="tuesday" && day!="thursday" && day !="friday" && fruit !="banana" && fruit !="apple" && fruit!="orange" && fruit!="grapefruit" && fruit!="kiwi" && fruit!="pineapple" && fruit!="grapes")
     {
        cout<<"invalid :";
     }
     return price;
}   