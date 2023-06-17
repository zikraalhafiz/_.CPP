#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
main()
{
 char no_trx[20],nama[25],kd_tuj[6],kota_tuj[20],kd_pswt[6],nm_pswt[12];
 long tarif,jlh_psn,tot_byr;
 clrscr();
 cout<<"ENTRY TRANSAKSI PEMESANAN TICKET"<<endl;
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
 cout<<"NO TRANSAKSI          =";
 cin>>no_trx;
 cout<<"NAMA PENUMPANG        =";
 cin>>nama;
 cout<<"KODE TUJUAN           =";
 cin>>kd_tuj;
  if(strcmp(kd_tuj,"KDT001")==0)
   {
   strcpy(kota_tuj,"JAKARTA");
   }
   else if(strcmp(kd_tuj,"KDT002")==0)
   {
   strcpy(kota_tuj,"PEKANBARU");
   }
 cout<<"NAMA KOTA TUJUAN      ="<<kota_tuj<<endl;
 cout<<"KODE PESAWAT          =";
 cin>>kd_pswt;
  if(strcmp(kd_pswt,"KPS001")==0)
   {
   strcpy(nm_pswt,"GARUDA");
   }
   else if(strcmp(kd_pswt,"KPS002")==0)
   {
   strcpy(nm_pswt,"LION");
   }
 cout<<"NAMA PESAWAT           ="<<nm_pswt<<endl;
 if((strcmp(kd_tuj,"KDT001")==0)&&(strcmp(kd_pswt,"KPS001")==0))
 {
 tarif=1500000;
 }
 else if((strcmp(kd_tuj,"KDT001")==0)&&(strcmp(kd_pswt,"KPS002")==0))
 {
 tarif=1000000;
 }
 else if((strcmp(kd_tuj,"KDT002")==0)&&(strcmp(kd_pswt,"KPS001")==0))
 {
 tarif=750000;
 }
 else if((strcmp(kd_tuj,"KDT002")==0)&&(strcmp(kd_pswt,"KPS002")==0))
 {
 tarif=500000;
 }
 cout<<"TARIF                  ="<<tarif<<endl;
 cout<<"JUMLAH PESAN           =";
 cin>>jlh_psn;
 tot_byr=tarif*jlh_psn;
 cout<<"TOTAL BAYAR            ="<<tot_byr<<endl;
 getch();
}