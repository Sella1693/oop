#include <iostream>
using namespace std;

class Employee{
	
	private:
		int IDPegawai;
		float salaryPegawai;
	
	public:
		Pegawai(){
			IDPegawai = 0;
			salaryPegawai = 0;
		}
		
		void input1(int ID){
			IDPegawai = ID;
		}
		
		void input2(float salary){
			salaryPegawai = salary;
		}
		
		void display(){
			cout << "No.ID Pegawai : " << IDPegawai;
			cout << "\nJumlah Kompensasi Pegawai : " << salaryPegawai << endl;
		}
};



int main(){
	int id;
	float sal;
	
	Employee data[4];
	
	for(int i=1; i<=3; i++){
		cout << "Input No.ID Pegawai : "; cin >> id;
		data[i].input1(id);
		cout << "Input Jumlah Kompensasi Pegawai : "; cin >> sal;
		data[i].input2(sal);
	}
	
	for(int j=1;j<=3; j++){
		data[j].display();
	}
	
	return 0;
}