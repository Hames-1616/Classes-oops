#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;

    public:
    Time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    void getdata()
    {
        cout<<"Enter the hrs , minutes and seconds"<<endl;
        cin>>hr>>min>>sec;
        while(sec>=60)
        {
            ++min;
            sec = sec - 60;
        }
        while(min>=60)
        {
            ++hr;
            min = min -60;
        }
    }
    void display()
    {
        cout<<hr<<":"<<min<<":"<<sec;
    }

} ;

int main()
{
    Time t;
    t.getdata();
    t.display();
}