#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iostream.h>



class pgw
{
 public:
  char nik[15],nama[20],gol[5],sts[10];
  char jabatan[15];
  int tunjangan,potongan,gaber;
  long gjp;


 public:
 		input_data()
 	{
      cout<<"INPUT"<<endl;
  		cout<<" NIK     :";gets(nik);
  		cout<<" NAMA    :";gets(nama);
  		cout<<" GOL     :";gets(gol);
  		cout<<" STATUS  :";gets(sts);
  		cout<<" POTONGAN:";cin>>potongan;
 	}

 		info()
 	{
   	cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  		cout<<"NIK                :"<<nik<<endl;
  		cout<<"NAMA PEGAWAI       :"<<nama<<endl;
  		cout<<"GOLONGAN           :"<<gol<<endl;
  		cout<<"STATUS             :"<<sts<<endl;
  		cout<<"POTONGAN           :"<<potongan<<endl;
  		cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
 	}

 		gaji_bersih()
 	{
  		gaber=(gjp+tunjangan)-potongan;
 	}

 		logika_if()
 	{
     			if(strcmp(gol,"IVa")==0)
       			{
        			strcpy(jabatan,"DIREKTUR");
        			gjp=4000000;
       			}
        			else if(strcmp(gol,"IIId")==0)
       			{
        			strcpy(jabatan,"KA.BAGIAN");
        			gjp=2500000;
       			}
        			else if(strcmp(gol,"IIIb")==0)
       			{
        			strcpy(jabatan,"STAFF");
        			gjp=1500000;
       			}


       if (sts,"MENIKAH" && gol,"IVa")
       {
	    	tunjangan=1500000;
       }
       else
       if(sts,"MENIKAH" && gol,"IIId")
       {
     	 	tunjangan=1000000;
       }
       else
       if(sts,"MENIKAH" && gol,"IIIb")
       {
	    	tunjangan=500000;
       }
       else
       {
	    	tunjangan=0;
       }


}
 };
 void main()
 {
 clrscr();
 pgw r;
 r.input_data();
 clrscr();
 r.info();
 r.logika_if();
 r.gaji_bersih();
 cout<<"JABATAN            :";cout<<r.jabatan<<endl;
 cout<<"GAJI POKOK         :";cout<<r.gjp<<endl;
 cout<<"TUNJANGAN          :";cout<<r.tunjangan<<endl;
 cout<<"GAJI BERSIH        :";cout<<r.gaber<<endl;
 getch();
 }