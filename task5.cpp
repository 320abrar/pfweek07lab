#include<iostream>
using namespace std;
string chekspeed(float speed);
main()
{
    float speed;
    cout<<"enter speed";
    cin>>speed;
    string result=chekspeed(speed);
    cout<<result;

}
string chekspeed(float speed)
{
    string chek;
    if(speed<=10)
    {
        chek="slow";
        return chek;
    }
    if(speed>=10 && speed<=50)
    {
        chek="average";
        return chek;

    }
    if(speed>50 && speed<=150)
    {
        chek="fast";
        return chek;

    }
    if(speed>150 && speed<=1000)
    {
        chek="very fast";
        return chek;
    }
    return 0;
}
