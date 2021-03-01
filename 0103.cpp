#include <iostream>
    using namespace std;

class Test {
    private:
        int grade;
public:
//constructor
    Test(){
        grade = 100;
    }
    Test(int value){
        grade = value;
    }
    void setGrade(int value){
        grade = value;
    };
    void getGrade(){
     cout << "Your Grade: " << grade << endl;
    };
};


int main(){
    //create an object (instance of class)
    Test student1, student2;

    //accessing object's methods
    student.setGrade(89);
    student.getGrade();

    student2.getGrade();
    return 0;
}