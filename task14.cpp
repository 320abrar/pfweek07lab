#include<iostream>
using namespace std;
float billis(char service,int time,string t);
main()
{
    char service;
    cout<<"enter the service:";
    cin>>service;
    int time;
    cout<<"enter the time:";
    cin>>time;
    string t;
    cout<<"enter time as day or night:";
    cin>>t;
    float result=billis(service,time,t);
    cout<<result;

}
float billis(char service,int time,string t)
{ 
    float bill;
    if((service=='r' || service =='R') && time<=50)
    {
        bill=10;
    }
    else if((service=='r' || service=='R') && time>=50)
    {
        time=time-50;
        bill=(time*0.20)+10;
    }
    if((service=='p' || service=='P')&&( t=="day" && time<=75) )
    {
        bill=25;
    }
    if((service=='p' || service=='P')&&( t=="day" && time>75)) 
    {
        time=time-75;
        bill=(time*0.10)+25;
    }
    if((service=='p' || service=='P')&&( t=="night" && time<=100))
    {
        bill=25;
    } 
    if((service=='p' || service=='P')&&( t=="night" && time>100))
    {
        time=time-100;
        bill=(time*0.05)+25;
    } 
    if(service!='p' && service !='P' && service !='r' && service !='R')
    {
        cout<<"invalid character:";
    }
    return bill;
}