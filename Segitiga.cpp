#include<stdio.h>
#include<conio.h>
main()
{
 int alas;
 int tgi;
 float luas;
 clrscr();
 printf("Menghitung Luas Segitiga\n");printf("\n");
 printf("Masukkan Alas Segitiga   : ");scanf("%i",&alas);
 printf("Masukkan Tinggi Segitiga : ");scanf("%i",&tgi);
 luas=0.5*alas*tgi;
 printf("Luas Segitiga adalah     :");printf("%5.2f",luas);
 getch();
 }
