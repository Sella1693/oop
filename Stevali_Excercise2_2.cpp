#include <iostream>
#include <stdlib.h>
using namespace std;


class BoothToll{
	private:
    	int mobil;
    	double amount;
    
    public:
  		BoothToll(){
			mobil = 0;
			amount = 0;
    	}
		void paying(){
        	mobil = mobil + 1;
        	amount = amount + 0.5;
    	}    
		void nopay(){
        	mobil = mobil + 1;
    	}
		void displayAmount()
    	{
        	cout << "\nTotal Amount yang dikumpulkan di Gerbang Toll = " << amount << endl << endl;
    	}
		void displayMobil()
    	{
        	cout << "\nTotal Mobil yang Berada di Gerbang Toll =  " << mobil << endl;
    	}
};
 
int main()
{
    int j;
    BoothToll b;
	
	do{
		cout << "1. Jumlah Yang Bayar " << endl;
		cout << "2. Jumlah Yang Tidak Bayar" << endl;
		cout << "3. Exit\nInput Pilih : "; cin >> j;
		switch (j){
   			case 1:
    			b.paying();
        		b.displayMobil();
        		b.displayAmount();
        		break;
    		case 2:
    			b.nopay();
    		    b.displayMobil();
    		    b.displayAmount();
    		    break;
    		case 3:
    			b.displayMobil();
    			b.displayAmount();
    		};
	}while(j!=3);
	
	return 0;
}