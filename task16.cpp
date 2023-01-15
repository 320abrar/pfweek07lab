#include <iostream>
using namespace std;
float billis(string month, int days);
float bills(string month, int days, float aprice);
main()
{
    
    float aprice;
    string month;
    cout << "enter the name of month:";
    cin >> month;
    int days;
    cout << "enter the days satayed:";
    cin >> days;
    float result = billis(month, days);
    cout << "studio:" << result;
    float ressult = bills(month, days, aprice);
    cout << "apartment:" << ressult;
}
float billis(string month, int days)
{
    float price;
    if ((month == "may" || month == "october") && days < 7)
    {
        price = 50 * days;
    }
    else if ((month == "june" || month == "september")  && days <=14 )
    {
        price = 75.20 * days;
    }
    else if ((month == "july" || month == "august"))
    {
        price = 76 * days;
    }

    if ((month == "may" || month == "october") && (days > 7 && days <= 14) )
    {
        price = 50 * days;
        price = price - (price * 5 / 100);
    }
    else if ((month == "may" || month == "october") && days > 14 )
    {
        price = 50 * days;
        price = price - (price * 30 / 100);
    }
    else if ((month == "june" || month == "september") && days > 14)
    {
        price = 75.20 * days;
        price = price - (price * 20 / 100);
    }
    return price;
}

    float bills(string month, int days, float aprice)
    {
        if ((month == "may" || month == "october")&& days <= 14)
        {
            aprice = 65 * days;
        }
        else if ((month == "june" || month == "september")  && days <= 14)
        {
            aprice = 68.70 * days;
        }
        else if ((month == "july" || month == "august")&& days <= 14)
        {
            aprice = 77 * days;
        }

        if ((month == "may" || month == "october") && days > 14)
        {
            aprice = 65 * days;
            aprice = aprice - (aprice * 10 / 100);
        }
        else if ((month == "june" || month == "september")&& days > 14)
        {
            aprice = 68.70 * days;
            aprice = aprice - (aprice * 10 / 100);
        }
         else if ((month == "july" || month == "august") && days > 14)
         {
        aprice = 77 * days;
        aprice = aprice - (aprice * 10 / 100);
         }
    return aprice;
    }

