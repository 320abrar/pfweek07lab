#include<iostream>
using namespace std;
float total(float km,string period);

main()
{
    float km;
    cout<<"enter kilometers:";
    cin>>km;
    string period;
    cout<<"enter period:";
    cin>>period;
    float result=total(km,period);
    cout<<"minimum is"<<result;
}
    float total(float km,string period)
{    float lowest;
    if(km<=20 && period=="day")
    {
     float taxiday=(0.90*km)+0.70;
     lowest=taxiday;
    }
    if(km<=20 && period=="night")
    {
    float taxinight=(0.90*km)+0.70;
    lowest=taxinight;
    }
    if(km>=20 && km<=100)
    {
     float bus=0.09*km;
     lowest=bus;
    }
    if(km>=100)
    {
        float train=0.06*km;
        lowest=train;
    }
    return lowest;
   
   
    
    
    
    

}