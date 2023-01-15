#include<iostream>
using namespace std;
float function(float buget,string category,float people,float price);
main()
{
    float buget;
    cout<<"enter the buget you have:";
    cin>>buget;
    string category;
    cout<<"enter the category of ticket:";
    cin>>category;
    float people;
    cout<<"enter the total peole:";
    cin>>people;
    float result;
    float price;
    result=function(buget,category,people,price);
    cout<<result;

}
float function(float buget,string category,float people,float price)
{
    float remain;
   if(category=="vip")
   {
    price=499.99;
    price =price*people;
   }
     if(category=="normal")
   {
    price=249.99;
    price =price*people;
   }
   if(people<4)
   {
    buget=buget-(buget*75/100);
   } 
   if(people>=5 && people<=9)
   {
    buget=buget-(buget*60/100);
   } 
   if(people>=10 && people<=24)
   {
    buget=buget-(buget*50/100);
   } 
    if(people>=25 && people<=49)
   {
    buget=buget-(buget*40/100);
   }
    if(people>50)
   {
    buget=buget-(buget*25/100);
   }
   if(buget>price)
   {
    remain=buget-price;
    cout<<"you have remained"<<remain;
   }
   if(buget<price)
   {
    remain=price-buget;
    cout<<"you have less"<<remain;
   }
   
   return remain;
}