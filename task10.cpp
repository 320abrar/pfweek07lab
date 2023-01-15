#include<iostream>
#include<cmath>
using namespace std;
float daysplayed(string year,float holidays,float home,float weekends);
main()
{
    string year;
    cout<<"enter the year:";
    cin>>year;
    float holidays;
    cout<<"enter the holidays in a year:";
    cin>>holidays;
    float home;
    cout<<"enter the days he goes to his home:";
    cin>>home;
     float weekends=48;
     float result=daysplayed(year,holidays,home,weekends);
     cout<<result;
}
float daysplayed(string year,float holidays,float home,float weekends)
{
    float total;
    if(year=="normal")
    {
        weekends=(weekends)-home;
        weekends=weekends*3/4;
        holidays=(holidays*2)/3;
        total=weekends+holidays+home;
    
    }
    if(year=="leap") 
    {
        weekends=(weekends)-home;
        weekends=(weekends*3)/4;
        holidays=(holidays*2)/3;
        total=weekends+holidays+home;
        float leap=(total*15)/100;
        total=total+leap;
       
    } 
    return  floor(total);
}