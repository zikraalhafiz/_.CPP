#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
int main()
{
int pertandingan1,pertandingan2,pertandingan3,jmlh,hasil;
char nama[25];
cout<<"Nama Siswa     :";cin>>nama;
cout<<"Nilai Pertandingan 1    :";cin>>pertandingan1;
cout<<"Nilai Pertandingan 2    :";cin>>pertandingan2;
cout<<"Nilai Pertandingan 3    :";cin>>pertandingan3;
jmlh=pertandingan1+pertandingan2+pertandingan3;
hasil=jmlh/3;
cout<<"Nilai Rata-Rata yang dihasilkan:"<<hasil<<endl;
if(hasil>= 80){
		cout<<"Juara 1";
}else if(hasil >=75){
		cout<<"Juara 2";
}else if(hasil >=65){
		cout<<"Juara 3";
}else{
		cout<<"Tidak Juara";
}
getch();
}