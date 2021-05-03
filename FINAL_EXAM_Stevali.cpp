#include <iostream>
#include <windows.h>

using namespace std;

long saldo = 10000000; //global variabel

int transaksi(int a,int b) //fungsi untuk menu tarik tunai
{
    saldo = a - b;
    cout<<endl;
    cout <<"TRANSAKSI BERHASIL! " <<endl<<endl;
    cout <<"JUMLAH SALDO ANDA SAAT INI : Rp. " <<saldo <<endl<<endl;
    cout <<"1.Back" <<endl;
    cout <<"2. Exit" <<endl<<endl;
}

int main (){
    char nama[50];
    int pin, transfer;
    int pilihan[7];
    char rek[8];

    awal:
    system ("cls");
    cout <<"\t\t WELCOME TO FIK-UNKLAB ATM" << endl<<endl;
    cout <<"\t*** SILAHKAN MASUKKAN PIN AKUN ANDA : 12345 ***" << endl<<endl;
    cout <<"MASUKKAN PIN ANDA : "; cin>>pin;

             if (pin == 54321) //==> PIN USER
    {
          
             system("cls");
             cout<<"\t \t \t \t===ATM FIK UNKLAB==="<<endl<<endl;
             cout<<"1. CEK SALDO"<<endl;
             cout<<"2. TARIK TUNAI"<<endl;
             cout<<"3. TRANSFER"<<endl<<endl;
             cout<<"Pilih Menu : "; cin>>pilihan[0];cout<<endl;
          
          
             switch (pilihan[0])    //menggunakan switch to case menu
             {
                   
		   case 1:      //case menu 1
                         cout<<"JUMLAH SALDO ANDA SAAT INI : Rp. "<<saldo<<endl<<endl;
                         cout<<"1. Back"<<endl;
                         cout<<"2. Exit"<<endl<<endl;
                         cout<<"Enter Pilihan Anda : "; cin>>pilihan[2];
                         if (pilihan[2] == 2)
                         {
                                     goto awal;
                                     }
                                     {
                                          break;
                                          cout<<endl;
                                          }
                 
                    case 2:      //Case menu 2
                         cout<<"========================="<<endl;
                         cout<<"\t **Menu**\n\tTarik Tunai  "<<endl;
                         cout<<"========================="<<endl;
                         cout<<" 1. Rp. 50.000      "<<endl;
                         cout<<" 2. Rp. 100.000     "<<endl;
                         cout<<" 3. Rp. 200.000     "<<endl;   
                         cout<<" 4. Rp. 500.000     "<<endl;   
                         cout<<" 5. Rp. 1.000.000   "<<endl;
                         cout<<" 6. Rp. 1.500.000   "<<endl;
                         cout<<" 7. Rp. 2.000.000   "<<endl;   
                         cout<<" 8. Rp. 3.000.000   "<<endl;
                         cout<<" 9. Rp. 5.000.000   "<<endl;
                         cout<<"=========================="<<endl<<endl;
                         cout<<"Enter Pilihan Anda : ";cin>>pilihan[3];
                         switch (pilihan[3]) //Sub case menu 2
                         {
                         		 case 1:  //sub case menu 2 - 1
                                  
                                     transaksi(saldo, 50000);
                                     cout<<"Enter Pilihan : ";cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;;
                                                      }
                                          
                                case 2:  //sub case menu 2 - 2
                                  
                                     transaksi(saldo, 100000);
                                     cout<<"Enter Pilihan : ";cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;;
                                                      }
                                          
                                          
                                case 3:  //sub case menu 2 - 3
                                  
                                     transaksi(saldo, 200000);
                                     cout<<"Enter Pilihan : ";cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;;
                                                      }
                             
                                case 4:  //sub case menu 2 - 4
                                  
                                     transaksi(saldo, 500000);
                                     cout << "Enter Pilihan : "; cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }
                                                   
                                case 5:  //sub case menu 2 - 5
                                  
                                     transaksi(saldo, 1000000);
                                     cout << "Enter Pilihan : "; cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }
                                                   
                                case 6:  //sub case menu 2 - 6
                                  
                                     transaksi(saldo, 1500000);
                                    cout << "Enter Pilihan : "; cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }
                                                   
                                case 7:  //sub case menu 2 - 7
                                  
                                     transaksi(saldo, 2000000);
                                     cout << "Enter Pilihan : "; cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }
                                                   
                                case 8:  //sub case menu 2 - 8
                                  
                                     transaksi(saldo, 3000000);
                                    cout << "Enter Pilihan : "; cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }
                                                   
                                case 9:  //sub case menu 2 - 9
                                  
                                     transaksi(saldo, 5000000);
                                     cout << "Enter Pilihan : "; cin>>pilihan[4];
                                     if (pilihan[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }
                                                   
                                                      }
                                
                             
                 
                    case 3:     //Case menu 3
                      
                         ulang:
                         cout<<"Masukkan Nomor Rekening Tujuan (Max 8 Digit): "; cin>>rek;
                         cout<<"Masukkan Jumlah Transfer      \t    : "; cin>>transfer; cout<<endl<<endl;
                         cout<<"Nomor Rekening  : "<<rek<<"\nJumlah Transfer : "<<transfer<<endl<<endl;
                         cout<<"1. Transfer"<<endl;
                         cout<<"2. Reset"<<endl<<endl;
                         cout<<"Enter Pilihan Anda : "; cin>>pilihan[5];
                         if (pilihan[5] == 1)
                         {
                                     cout<<endl;
                                     saldo = saldo - transfer;
                                     cout<<"TRANSAKSI ANDA BERHASIL!"<<endl;
                                     cout<<"JUMLAH SALDO ANDA SAAT INI : Rp. "<<saldo<<endl<<endl;
                                     cout<<"1. Back"<<endl;
                                     cout<<"2. Exit"<<endl<<endl;
                                     cout<<"Enter Pilihan : "; cin>>pilihan[6];
                                     if (pilihan[5] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      break;
                                                      }
                                                      }
                                                      {
                                                            cout<<endl;
                                                            goto akhir;
                                                            }

                                            
                         }
                         }
                         {
                          cout<<"PIN ANDA SALAH !"<<endl<<endl;
                          cout<<"1.Back"<<endl<<endl;
                          cout<<"2.Exit"<<endl<<endl;
                          cout<<"Enter Pilihan : "; cin>>pilihan[1];
                          if(pilihan[1] == 1)
                          {
                                     goto awal;
                                     }
                                     {
                                          goto akhir;
                                          }
                                          }
                                                         
                       
akhir:           
cout << "THANKYOU FOR OUR BANK~ SEE YOU ON TOP!" << endl;
system("PAUSE");
	return 0;
 
}
