#include <iostream>
    using namespace std;

class Test {
    private:
        int grade;
public:
    void setGrade(int value){
        grade = value;
    };
    void getGrade(){
     cout << "Your Grade: " << grade << endl;
    };
};


int main(){
    //create an object (instance of class)
    Test student;

    //accessing object's methods
    student.setGrade(89);
    student.getGrade();
    return 0;
}