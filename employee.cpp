#include<iostream>
using namespace std;
class Employee
{
int eid;
string name;
public:
void setemployeeid(int eid){this->eid=eid;}
void setname(string name){this->name=name;}
int getemployeeid(){return eid;}
string getname(){return name;}
Employee(int eid,string name)
{
this->eid=eid;
this->name=name;
}
};
class fulltimeemployee:public Employee
{
private:
int salary;
public:
void setsalary(int salary){this->salary=salary;}
int getsalary(){return salary;}
fulltimeemployee(int eid,string name,int salary=0):Employee(eid,name)
{
setemployeeid(eid);
setname(name);
this->salary=salary;
}
};
class parttimeemployee:public Employee
{
private:
int wage;
public:
void setwage(int wage){this->wage=wage;}
int getwage(){return wage;}
parttimeemployee(int eid,string name,int wage=0):Employee(eid,name)
{
setemployeeid(eid);
setname(name);
this->wage=wage;
}
};
int main()
{
parttimeemployee p1(1,"Jai",300);
fulltimeemployee p2(2,"Raj",5000);
cout<<"\nSalary of  "<<p2.getname()<<" is "<<p2.getsalary();
cout<<"\nDaily Wage of  "<<p1.getname()<<" is "<<p1.getwage();

}
