#include<iostream>
using namespace std;

class large
{
    private:
    int a,b,c;

    public:
    
    void lar()
    {
        cout<<"Enter the three numbers"<<endl;
        cin>>a>>b>>c;
    }

    void big()
    {
        if(a>b && a>c)
        {
            cout<<a<<" is greater";
        }
        else if(b>a && b>c)
        {
            cout<<b<<" is greater";
        }
        else 
        {
            cout<<c<<" is greater";
        }
    }

};

int main()
{
    large l;
    l.lar();
    l.big();
}