#include <iostream>
using namespace std;

class Employee{
        private:
            char firstName[20];
            char lastName[20];
            char socialSecurityNumber[10];
        public:
            int salary;
    Employee(){
        cout <<"Enter First Name: "; cin>>firstName;
        cout <<"Enter Last Name: "; cin>>lastName;
        cout <<"Enter Social Security Number: "; cin>>socialSecurityNumber;

    }
virtual void Salary(){};
virtual displayInfo(){
    cout <<"\nEmployee Information" << endl;
    cout <<"First Name: " <<firstName << endl;
    cout <<"Last Name: " <<lastName << endl;
    cout <<"Social Security Number: " <<socialSecurityNumber << endl;
    }
};

class SalariedEmployee: public Employee{
            private: 
                int salary1;
            public: 
                SalariedEmployee():Employee(){}
        void Salary(){
            salary1 = 1000000;
            salary = salary1;
            cout <<"Salary = "<<salary<< endl << endl;
        }
};

class CommissionEmployee: public Employee{
        protected:
            int sales;
            int salary1;
        public:
            CommissionEmployee():Employee(){}
    void Salary(){
        cout <<"\nEnter amount of sales: "; cin>>sales;
        salary1 = sales*0.4;
    }
    void displaySalary(){
        cout <<"Salary = " <<salary1 << endl << endl;
    }
};

class HourlyEmployee: public Employee{
        private: 
            int hour;
        public:
            HourlyEmployee():Employee(){}
    void Salary(){
        cout <<"\nEnter Hours of Work: "; cin>>hour;
        if(hour<=40){
            salary=250000*hour;
        }
        else{
            salary = (250000*40) + (300000*hour);
        }
        cout <<"Salary = " <<salary << endl << endl;
    }
};

class BasePlusCommissionEmployee: public CommissionEmployee{
        public:
            BasePlusCommissionEmployee():CommissionEmployee(){}
    void realSalary(){
        int base = 2000000;
        salary = salary1 + base;
        cout << "Salary = " <<salary << endl << endl;
    }
};

int main(){
    
    cout <<"Salaried Employee" << endl;
    SalariedEmployee one;
    one.displayInfo();
    one.Salary();

    cout <<"Commission Employee" << endl;
    CommissionEmployee two;
    two.displayInfo();
    two.Salary();
    two.displaySalary();

    cout <<"Hourly Employee" << endl;
    HourlyEmployee three;
    three.displayInfo();
    three.Salary();

    cout <<"Base Plus Commission Employee" << endl;
    BasePlusCommissionEmployee four;
    four.displayInfo();
    four.Salary();
    four.realSalary();

    return 0;
}