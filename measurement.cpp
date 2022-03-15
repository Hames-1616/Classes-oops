#include<iostream>
using namespace std;
class Measurement
{
    int meter,km;
    public:
    
    Measurement()
    {
        meter =0;
        km=0;
    }

    void getdata()
    {
        cout<<"Enter the km and meter"<<endl;
        cin>>km>>meter;
       
        
    }
    Measurement add(Measurement m)
    {
        Measurement temp;
        temp.meter = meter + m.meter;
        temp.km = km + m.km;
        while(temp.meter>=1000)
        {
            ++temp.km;
            temp.meter = temp.meter - 1000;
        }
        return temp;
    }
    void display()
    {
        cout<<km<<" km "<<meter<<" m";
    }
};

int main()
{
    Measurement m1,m2,m3;
    m1.getdata();
    m2.getdata();
    m3=m1.add(m2);
    m3.display();
    
}