#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>

main()
{
char a1[45];char a2[45];
cout<<"Masukkan Kata-1=";cin>>a1;
cout<<"Masukkan Kata-2= ";cin>>a2;
cout<<"=========================="<<endl;strcat(a1, a2);
cout<<"Hasil Penggabungannya = "<<a1;
getch();
}
