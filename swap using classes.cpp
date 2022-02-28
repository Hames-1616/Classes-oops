#include<iostream>
using namespace std;

class swap_number
{

    private :
    int a,b,temp;

    public:

    void get_details()
    {
        cout<<"Enter the First Number"<<endl;
        cin>>a;
        cout<<"Enter the Second Number"<<endl;
        cin>>b;

        cout<<"Before swap "<<endl<<"a = "<<a<<"  b = "<<b;
    }

    void swapp()
    {
        temp = a;
        a=b;
        b = temp;
        cout<<endl;
        cout<<"After swapping"<<endl<<"a = "<<a<<"    b = "<<b;
    }
};

int main()
{
    swap_number s1;
    s1.get_details();
    s1.swapp();
}
