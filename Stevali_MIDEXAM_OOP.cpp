#include <iostream>
using namespace std;


class Mahasiswa{
	
	private:
		int Atten, Quis, Assign, Mid, Final, Grade;
		char Nama[30];
			
			
	public:
		Student(){
		Atten = Quis = Assign = Mid = Final = Grade = 0;
			
		}
		
void Input(){
		cout << "Nama Student \t\t: "; cin >> Nama;
		cout << "Attendance \t: "; cin >> Atten;
		cout << "Quiz \t\t: "; cin >> Quis;
		cout << "Assignment \t: "; cin >> Assign;
		cout << "Mid Exam \t: "; cin >> Mid;
		cout << "Final Exam \t: "; cin >> Final;
		} 
		
void Hasil1(){
		cout << "Nama Student \t\t: " << Nama << endl;
		cout << "Attendance \t: " << (Atten*10)/100 << endl;
		cout << "Quiz \t\t: " << (Quis*10)/100 << endl;
		cout << "Assignment \t: " <<(Assign*20)/100 << endl;
		cout << "Mid Exam \t: " << (Mid*30)/100 << endl;
		cout << "Final Exam \t: " << (Final*30)/100 << endl;
		}
		
void Hasil2(){
		cout << Nama <<" \t \t "; Grade_Total();
		}
		
void Grade_Total(){
	Grade = ((Atten*10)/100) + ((Quis*10)/100) + ((Assign*20)/100) + ((Mid*30)/100) + ((Final*30)/100);
	cout << Grade <<" " ;
		
		if (Grade>=91 && Grade<=100){
				cout << "(A)";
			}
			
		else if (Grade>=85 && Grade<=90){
				cout << "(A-)";
			}
			
		else if (Grade>=82 && Grade<=84){
				cout << "(B+)";
			}
			
		else if (Grade>=78 && Grade<=81){
				cout << "(B)";
			}
		else if (Grade>=75 && Grade<=77){
				cout << "(B-)";
			}
			
		else if (Grade>=70 && Grade<=74){
				cout << "(C+)";
			}
			
		else if (Grade>=67 && Grade<=69){
				cout << "(C)";
			}
			
		else if (Grade>=60 && Grade<=66){
				cout << "(C-)";
			}
			
		else if (Grade>=40 && Grade<=59){
				cout << "(D)";
			}
			
		else if (Grade>=0 && Grade<=39){
				cout << "(F)";
			} cout << endl;
		}
};

int main () {
	
	int Total = 0;
	cout << "Input Jumlah Student : "; cin >> Total; cout << "\n";
	
	Mahasiswa Set[Total];
	

	for (int j=0; j<Total; j++) {
		cout << "Input Student's " << j+1 << " Data \n";
		Set[j].Input(); cout << "\n";
	} cout << "\n\n";
	

	for (int j=0; j<Total; j++) {
		cout << "Student's "<< j+1 <<" Data \n";
		Set[j].Hasil1(); cout << "\n";
	} cout << "\n\n";
	

	for (int j=0; j<Total; j++) {
		Set[j].Hasil2();
	} cout << "\n\n\n";
	
	return 0;
}