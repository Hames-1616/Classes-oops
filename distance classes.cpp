#include<iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

    public:
    Distance()
    {
        feet=0;
        inches=0;
    }

    void getdata()
    {
        cout<<"Enter the feet and inches"<<endl;
        cin>>feet>>inches;
    }

    Distance add(Distance d)
    {
        Distance t;
        t.feet = feet + d.feet;
        t.inches = inches + d.inches;
        while(t.inches>=12)
        {
            ++t.feet;
            t.inches = t.inches - 12;
        }
        return t;
    }
    void display()
    {
        cout<<feet<<" feet "<<inches<<" inches";
    }
};
int main()
{
   Distance d1,d2,d3;
   d1.getdata();
   d2.getdata();
   d3 = d1.add(d2);
   d3.display();
}