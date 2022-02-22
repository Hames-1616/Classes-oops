#include<iostream>
using namespace std;
class payslip
{
    private:
    float basic_salary,gross_salary,HRA,DA;

    public:
    void get_emp_details()
    {
        cout<<"Enter the basic salary"<<endl;
        cin>>basic_salary;
    }
    void cal_gross_salary()
    {
        HRA = basic_salary * 0.01;
        DA = basic_salary * 0.02;
        gross_salary = HRA + DA + basic_salary;
    }

    void showpayslip()
    {
        cout<<"Basic Salary = "<<basic_salary<<endl;
        cout<<"HRA = "<<HRA<<endl;
        cout<<"DA = "<<DA<<endl;
        cout<<"Gross salary = "<<gross_salary<<endl;
    }

};
int main()
{
    payslip p1;
    p1.get_emp_details();
    p1.cal_gross_salary();
    p1.showpayslip();
}