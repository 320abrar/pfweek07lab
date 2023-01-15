#include<iostream>
using namespace std;
void function(float total,float per,string grade,float obt);
main()
{
    float per;
    string grade;
    string name;
    cout<<"enter the name of student:";
    cin>>name;
    float english;
    cout<<"enter the marks in english subject:";
    cin>>english;
     float math;
    cout<<"enter the marks in math subject:";
    cin>>math;
     float chemistry;
    cout<<"enter the marks in chemistry subject:";
    cin>>chemistry;
     float social_sciences;
    cout<<"enter the marks in social sciences subject:";
    cin>>social_sciences;
     float biology;
    cout<<"enter the marks in biology subject:";
    cin>>biology;
    float total=500;
    float obt;
    obt=english+math+chemistry+social_sciences+biology;
    cout<<"your total marks are:"<<obt;
    function(total,per,grade,obt);
}
void function(float total,float per,string grade,float obt)
{
    per=(obt/total)*100;
    cout<<"your percentage is:"<<per;
    if(per >=90 && per<= 100)
    {
        grade="A+";
        cout<<"your grade is:"<<grade;
    }
      if(per >=80 && per<= 90)
    {
        grade="A";
         cout<<"your grade is:"<<grade;
    }
      if(per >=70 && per<= 80)
    {
        grade="B+";
         cout<<"your grade is:"<<grade;

    }
      if(per >=60 && per<= 70)
    {
        grade="B";
         cout<<"your grade is:"<<grade;

    }
      if(per >=50 && per<= 60)
    {
        grade="C";
         cout<<"your grade is:"<<grade;

    }
     if(per >=40 && per<= 50)
    {
        grade="D";
         cout<<"your grade is:"<<grade;

    }
     if(per <40)
    {
        grade="F";
         cout<<"your grade is:"<<grade;

    }
    
}
