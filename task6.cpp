#include<iostream>
using namespace std;
float totlincome(string screening,int rows,int columns);
main()
{
    string screening;
    cout<<"enter screening";
    cin>>screening;
    int rows;
    cout<<"enter rows:";
    cin>>rows;
    int columns;
    cout<<"enter columns:";
    cin>>columns;
    float result=totlincome(screening,rows,columns);
    cout<<result;

}
float totlincome(string screening,int rows,int columns)
{
    float total;
    if(screening=="premier")
    {
        total=(rows*columns)*12.0;
        return total;
    }
     if(screening=="normal")
    {
        total=(rows*columns)*7.5;
        return total;
    }
     if(screening=="discount")
    {
        total=(rows*columns)*5;
        return total;
    }
    return 0;
}