#include <iostream>
using namespace std;

class Contoh {
    private:
        int *c;
    public:
        // constructor
        Contoh(int nilaiC){
            c = new int;
            *c = nilaiC;
        }
        //destructor
        ~Contoh(){
            delete c;

            cout << "Ini adalah fungsi destructor." << endl;
            cout << "Object dan variable pointer berhasil dihapus." << endl;
        }
    
   // void setC(int nilaiC) {
      //      c= nilaiC;
      //  }

    void getC() {
            cout << endl << "Nilai C : " << *c << endl;
        }
   
};

int main(){
    Contoh aiu(27);

       // aiu.setC(18);
        aiu.getC();

        return 0;

}