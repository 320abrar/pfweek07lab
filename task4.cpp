#include<iostream>
using namespace std;
string chektitle(int age,char gender);
main()
{
    int age;
    cout<<"enter age";
    cin>>age;
    char gender;
    cout<<"enter gender";
    cin>>gender;
    string result=chektitle(age,gender);
    cout<<result;

}
string chektitle(int age,char gender)
{
    string title;
    if(age>=16 && gender=='m')
    {
        title="Mr.";
         return title;

    }
    if(age<16 && gender=='m')
    {
        title="Master";
         return title;

    }
     if(age>16 && gender=='f')
    {
        title="Ms.";
         return title;
        
    }
     if(age<16 && gender=='f')
    {
        title="Miss.";
         return title;
        
    }
    return 0;
  
    
}
