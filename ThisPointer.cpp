#include <iostream>
using namespace std;

class Student{
    private:
        float gpa;

    public:
        void setGPA(float gpa){
            this->gpa = gpa;
        }
    
    float getGPA(){
        return this->gpa;
    }
};
int main(){
    Student s;

    s.setGPA(3.78);
    cout << "Your current GPA: " << s.getGPA();

    return 0;
}
