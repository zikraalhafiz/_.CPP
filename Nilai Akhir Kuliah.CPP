#include<iostream>
#include<conio>
#define NA na*0.1
#define NT nt*0.2
#define NUTS nuts*0.3
#define NUAS nuas*0.4
#define NAKHIR NA+NT+NUTS+NUAS
main()
{
float n_absensi,n_tugas,n_uas,n_akhir,na,nt,nuas,nuts,n_uts;

cout<<"Program Hitung Nilai Akhir Mata Kuliah"<<endl;
cout<<"--------------------------------------"<<endl;
cout<<endl;
cout<<"Masukkan Nilai Absensi     : ";cin>>na;
cout<<"Masukkan Nilai Tugas         : ";cin>>nt;
cout<<"Masukkan Nilai UTS            : ";cin>>nuts;
cout<<"Masukkan Nilai UAS            : ";cin>>nuas;
cout<<"--------------------------------------"<<endl;
n_absensi=NA;
cout<<"Nilai Murni Absensi                 : "<<na<<" * 10% = "<<n_absensi<<endl;
n_tugas=NT;
cout<<"Nilai Murni Tugas                     : "<<nt<<" * 20% = "<<n_tugas<<endl;
n_uts=NUTS;
cout<<"Nilai Murni UTS                        : "<<nuts<<" * 30% = "<<n_uts<<endl;
n_uas=NUAS;
cout<<"Nilai Murni UAS                        : "<<nuas<<" * 40% = "<<n_uas<<endl;
cout<<endl;
n_akhir=NAKHIR;
cout<<"Nilai Akhir Yang Diperoleh Sebesar  : "<<n_akhir<<endl;
getch();
}
