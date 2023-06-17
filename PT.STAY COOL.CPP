#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip.h>
main()
{
char nama[35][10];
int i,j,gol[10],pen[10],jam[10],lembur1[10],lembur2[10];
long tunbat[10],tunpen[10],bersih[10],jumji[10],total[10],pajak[10];
cout<<"\t\t\tPT. STAY COOL       "<<endl;
cout<<"\t\t-----------------------------"<<endl;
cout<<" Masukan jumlah karyawan =   ";cin>>j;
for(i=1;i<=j;i++)
{
cout<<" Karyawan ke- "<<i<<endl;
cout<<" Nama karyawan                 = ";gets(nama[i]);
cout<<" Golongan [1/2/3]              = ";cin>>gol[i];
cout<<" Pendidikan [1=SMA/2=D3/3=S1]  = ";cin>>pen[i];
cout<<" Jumlah jam kerja              = ";cin>>jam[i];

if(gol[i]==1)
tunbat[i]=0.05*700000;
else
if(gol[i]==2)
tunbat[i]=0.1*7000000;
else
tunbat[i]=0.15*700000;

if(pen[i]==1)
tunpen[i]=0.05*700000;
else
if(pen[i]==2)
tunpen[i]=0.1*700000;
else
tunpen[i]=0.15*700000;

lembur1[i]=jam[i]-240;
if(lembur1[i]>0)
lembur2[i]=lembur1[i]*2500;
else
lembur2[i]=0;

jumji[i]=700000+tunbat[i]+tunpen[i];
pajak[i]=0.1*jumji[i];
bersih[i]=jumji[i]-pajak[i];
total[j]=total[j]+(jumji[i]-pajak[i]);
}

clrscr();
cout<<"                      PT. STAY COOL                                     "<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
cout<<"No        Nama           Tunjangan                                      "<<endl;
cout<<"        karyawan       --------------            Honor     Pajak     Pendapatan"<<endl;
cout<<"                     Jabatan    Pendidikan       Lembur                bersih  "<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
for(i=1;i<=j;i++)
{
cout<<setiosflags(ios::left)<<setw(8)<<i;
cout<<setiosflags(ios::left)<<setw(13)<<nama[i];
cout<<setiosflags(ios::left)<<setw(12)<<tunbat[i];
cout<<setiosflags(ios::left)<<setw(18)<<tunpen[i];
cout<<setiosflags(ios::left)<<setw(8)<<lembur2[i];
cout<<setiosflags(ios::left)<<setw(11)<<pajak[i];
cout<<setiosflags(ios::left)<<setw(8)<<bersih[i]<<endl;
}
cout<<"------------------------------------------------------------------------"<<endl;

cout<<"Total gaji   = "<<total[j]<<endl;
getch();
}