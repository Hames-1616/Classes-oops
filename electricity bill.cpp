#include<iostream>
using namespace std;
class electricity
{
    private:
    int unit;

    public:
    
    void get_detail()
    {
        cout<<"Enter the units consumed"<<endl;
        cin>>unit;
    }

    void calculate()
    {
        if(unit<100)
        {
            cout<<"Electricity bill = "<<unit*3;
        }
        else if(unit<500)
        {
            cout<<"Electricity bill = "<<(100*3)+(unit-100)*5;
        }
        else if(unit<1000)
        {
            cout<<"Electricity bill = "<<(100*3)+(500*5)+(unit-600)*10;
        }
    }
};
int main()
{
    electricity e;
    e.get_detail();
    e.calculate();
}