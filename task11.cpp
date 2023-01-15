#include<iostream>
using namespace std;
string chek(string temp,string hum);
main()
{
string temp;
cout<<"enter teprature:";
cin>>temp;
string hum;
cout<<"enter humidity:";
cin>>hum;
string result=chek(temp,hum);
cout<<result;
}
string chek(string temp,string hum)
{ 
        string cheked;
        if(temp=="warm" && hum=="dry")
        {
            cheked="play tennis:";
        }
        else if(temp=="warm" && hum=="humid")
        {
            cheked="swim";
        }
        else if(temp=="cold" && hum=="dry")
        {
            cheked="play basketball";
        }
        else if(temp=="cold" && hum=="humid")
        {
            cheked="watch TV";
        }
        return cheked;
}   
