#include<iostream>
using namespace std;
string chek(string sign,int date,string month);
main()
{
    string sign;
    int date;
    cout<<"enter the date of birth:";
    cin>>date;
    string month;
    cout<<"enter the month:";
    cin>>month;
    string result=chek(sign,date,month);
    cout<<result;
}
string chek(string sign,int date,string month)
{
    if((month=="march" && date>=21)||(month=="april" && date<=19))
    {
        sign="aries";
    }
    
    if((month=="april" && date>=20) || (month=="may" && date<=20))
    {
        sign="taurus";
    }
    
    if((month=="may" && date>=21)||(month=="june" && date<=20))
    {
        sign="geminy";
    }
     if((month=="june" && date>=21)||(month=="july" && date<=22))
    {
        sign="cancer";
    }
    if((month=="july" && date>=23)||(month=="august" && date<=22))
    {
        sign="Leo";
    }
    
    if((month=="august" && date>=23)||(month=="september" && date<=22))
    {
        sign="Virgo";
    }
   if((month=="september" && date>=23)||(month=="october" && date<=22))
    {
        sign="Libra";
    }
    
    if((month=="october" && date>=23)||(month=="november" && date<=21))
    {
        sign="Scorpio";
    }
    
    if((month=="november" && date>=22)||(month=="december" && date<=21))
    {
        sign="Saggitaruis";
    }
     if((month=="december" && date>=22)||(month=="january" && date<=19))
    {
        sign="Capricorn";
    }
     if((month=="january" && date>=20)||(month=="febrary" && date<=18))
    {
        sign="Aquarius";
    }
     if((month=="febrary" && date>=19)||(month=="march" && date<=20))
    {
        sign="Pieces";
    }
     return sign;

}
