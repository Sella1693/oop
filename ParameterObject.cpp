#include <iostream>
using namespace std;

class Contoh {
    private:
        int j;

    public:
        void setJ(int j){
            this->j = j;
        }

        int getJ(){
            return this->j;
        }
};

int square(Contoh C, int x){
    C.setJ(x);
    return (C.getJ() * C.getJ());

}

Contoh myFunction(){
    Contoh E;
    E.setJ(18);

    return E;
}

int main(){

    Contoh c2;
    cout << "Square value of: " << square(c2, 8) << endl << endl;

    Contoh c3;
    c3 = myFunction();
    cout << "Value of J: " << c3.getJ();
    return 0;
}