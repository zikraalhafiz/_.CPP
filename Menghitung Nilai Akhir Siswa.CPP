#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main(){

 char nama[80];
 int nilai1, nilai2, nilai3;
 float nilaiakhir, murni1, murni2, murni3;

 cout<<" PROGRAM HITUNG NILAI AKHIR\n\n";
 cout<<" Nama Siswa            : ";
 gets(nama);

 cout<<" Nilai Keaktifan       : ";
 cin>>nilai1;
 cout<<" Nilai Tugas           : ";
 cin>>nilai2;
 cout<<" Nilai Ujian           : ";
 cin>>nilai3;

 murni1 = 20 * nilai1 /(float)100;
 murni2 = 30 * nilai2 /(float)100;
 murni3 = 50 * nilai3 /(float)100;
 nilaiakhir = murni1 + murni2 + murni3;

 clrscr();

 cout<<" Siswa yang bernama "<<nama<<endl;
 cout<<" Dengan nilai yang dipresentasikan."<<endl;
 cout<<" Nilai Murni Keaktifan : "<<murni1<<endl;
 cout<<" Nilai Murni Tugas     : "<<murni2<<endl;
 cout<<" Nilai Murni Ujian     : "<<murni3<<endl<<endl;
 cout<<" Jadi siswa yang bernama "<<nama;
 cout<<" memperoleh nilai akhir sebesar "<<nilaiakhir;
 cout<<" dengan grade ";

 if(nilaiakhir>=80){
 cout<<"A";
 }
 else if(nilaiakhir>=70){
 cout<<"B";
 }
 else if(nilaiakhir>=56){
 cout<<"C";
 }
 else if(nilaiakhir>=46){
 cout<<"D";
 }
 else{
 cout<<"E";
 }

 getch();
}
