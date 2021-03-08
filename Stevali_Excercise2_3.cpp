#include <iostream>
using namespace std;
 
class Waktu
{
    private:
        int hours;
        int minutes;
        int seconds;
 
    public:
        void getWaktu(void);
        void putWaktu(void);
        void inputWaktu(Waktu T1,Waktu T2);
};
 
void Waktu::getWaktu(void){

    cout << "Input WAKTU: " << endl;
    cout << "Jam : ";   cin>>hours;
    cout << "Menit : ";  cin>>minutes;
    cout << "Detik : ";  cin>>seconds;
}
 
void Waktu::putWaktu(void){

    cout << endl;
    cout << "WAKTU SETELAH DI TAMBAH: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Waktu::inputWaktu(Waktu T1,Waktu T2){

     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
 
int main()
{
  	Waktu T1,T2,T3;
    T1.getWaktu();
    T2.getWaktu();
    
      //Input Waktu ke 2
      
    T3.inputWaktu(T1,T2);
    T3.putWaktu();
     
    return 0;
}