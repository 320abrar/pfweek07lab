#include <iostream>
using namespace std;
string box(float h, float x, float y);
main()
{
    float h;
    float x,y;
    
    cout<<"Enter the value of h: ";
    cin>>h;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    string result;
    result = box(h,x,y);
    cout<<result;
}

string box(float h, float x, float y)
{
    string final;
    if((x==0 && y>h) || (x>h*3 && y==0))
    {
        final = "outside";
    }
    else if((x==0 || y == 0) || (x== h*3 || x==h*2 || x == h)||(y == h || h== h*2 || h== h*3 || h== h*4))
    {
        final = "Border";
    }
    else if((y>h*4 || x > 3 * h) || (y>h && x> h * 2) || (y>h && x<h))
    {
        final = "outside";
    }
    else
    {
        final = "Inside";
    }
    return final;
}