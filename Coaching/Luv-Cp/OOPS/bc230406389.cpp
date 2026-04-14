#include <iostream>
#include<conio.h>
#include <string>
using namespace std;

class Employee {
protected:
    int Employee_id;
    string Employee_Name;
    double Salary;

public:
    Employee(int id = 0, string name = "") 
    : Employee_id(id), Employee_Name(name), Salary(0.0) {}
    virtual void calculateSalary() = 0;

    virtual void displaySalary(){
        cout << "Salary of" << Employee_Name << "is: " << Salary << endl;
    }

    virtual ~Employee() {}
};

class RegularEmployee : public Employee{
private:
    double BasicSalary;
    double Allowance;
    double Incometax;

public:
    RegularEmployee(int id, string name, double BasicSalary = 0, double Allowance = 0, double Incometax = 0) 
    : Employee(id, name), BasicSalary(BasicSalary), Allowance(Allowance), Incometax(Incometax) {}

    void calculateSalary() override {
        Salary = BasicSalary + Allowance - Incometax;
    }

    void displaySalary()override {
        cout << "Salary of Regular Employee with basic pay: " << BasicSalary 
            << ", Allowance: " << Allowance
            << ", and Incometax: " << Incometax << " is given below:" << endl;
        cout << Salary << endl;
    }
};


class HourlyEmployee : public Employee{
private:
    int NoOfHours;
    int HourlyRate;

public:
    HourlyEmployee(int id , string name, int NoOfHours = 0, int HourlyRate = 0) 
    : Employee(id, name), NoOfHours(NoOfHours), HourlyRate(HourlyRate) {}

    void calculateSalary() override {
        Salary = NoOfHours * HourlyRate;
    }

    void displaySalary()override {
        cout << "\nSalary of Hourly Employee with hourly rate: " << HourlyRate 
            << " and no. of hours " << NoOfHours << " is given below:" << endl;
            cout << Salary << endl;
    }


};


int main() {

    Employee* employees[2];

    employees[0] = new RegularEmployee(1, "Shahzoor", 75000, 25000, 8000);  
    employees[1] = new HourlyEmployee(2, "Khan", 2000, 15);  


    for (int i = 0; i < 2; ++i) {
        employees[i]->calculateSalary(); 
        employees[i]->displaySalary(); 
    }

    for (int i=0; i<2;i++){
        delete employees[i]; 
    }

    getch();
    return 0;
}
