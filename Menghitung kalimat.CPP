#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
main()

{
float kalimat1=35.6;
float kalimat2=12.5;float haper, hapem, hapen, hapeng;
cout<<"Diberikan kalimat string berikut :"<<endl;
cout<<""<<endl;cout<<"Kalimat1 = 35.6"<<endl;
cout<<"Kalimat2 = 12.5"<<endl;
cout<<"================================================="<<endl;
cout<<"Kedua Kalimat diatas dihitung menjadiperhitungan"<<endl;
cout<<"Seperti berikut ini"<<endl;cout<<""<<endl;
cout<<"A. Perkalian       "<<endl;
cout<<"B. Pembagian       "<<endl;
cout<<"C. Pertambahan     "<<endl;
cout<<"D. Pengurangan     "<<endl;
cout<<""<<endl;

cout<<"Penyelesaian : "<<endl;

haper=kalimat1*kalimat2;

cout<<"A. Hasil Perkalian   = "<<haper<<endl;hapem=kalimat1/kalimat2;
cout<<"B. Hasil Pembagian   = "<<hapem<<endl;hapen=kalimat1+kalimat2;
cout<<"C. HasilPenambahan  = "<<hapen<<endl;hapeng=kalimat1-kalimat2;
cout<<"D. Hasil Pengurangan = "<<hapeng<<endl;
getch();
}

