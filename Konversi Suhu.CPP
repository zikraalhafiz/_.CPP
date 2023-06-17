#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
  int menu;
  float c, r, f, k;
  while(1) {
    
    printf("\n------- Menu Konversi Suhu -------\n");
    printf("1. Konversi Celcius (c) \n");
    printf("2. Konversi Reamur (r) \n");
    printf("3. Konversi Fahrenheit (F) \n");
    printf("4. Konversi Kelvin (K) \n");
    printf("5. Keluar program \n");
    printf("------------------------------\n");
    printf("Pilih nomor menu: ");
    scanf("%d",&menu);
    fflush(stdin);
    if(menu == 1){
      printf("Masukkan nilai Celcius: ");
      scanf("%f", &c);
      r = c*4/5;
      f = (c*9/5)+32;
      k = c+273.16;
      printf("Celsius dalam Reamur adalah %.2f\n", r);
      printf("Celcius dalam Fahrenheit adalah %.2f\n", f);
      printf("Celcius dalam Kelvin adalah %.2f\n",k);
      printf("\n");
    } else if (menu == 2){
      printf("Masukkan nilai Reamur: ");
      scanf("%f",&r);
      c = r*5/4;
      f = (r*9/4)+32;
      k = (r*5/4)+273.16;
      printf("Nilai Reamur dalam Celcius adalah %.2f\n", c);
      printf("Nilai Reamur dalam Fahrenheit adalah %.2f\n", f);
      printf("Nilai Reamur dalam Kelvin adalah %.2f\n", k);
      printf("\n");
    } else if (menu == 3){
      printf("Masukkan nilai Fahrenheit: ");
      scanf("%f", &f);
      c = (f*5/9)-32;
      r = (f*4/9)-32;
      k = (f-32)*5/9+273.16;
      printf("Nilai Fahrenheit dalam Celcius adalah %.2f\n",c);
      printf("Nilai Fahrenheit dalam Reamur adalah %.2f\n",r);
      printf("Nilai Fahrenheit dalam Kelvin adalah %.2f\n",k);
      printf("\n");
    } else if(menu == 4) {
      printf("Masukkan nilai Kelvin: ");
      scanf("%f", &k);
      c = k-273.16;
      r = (k-273.16)*4/5;
      f = (k-273.16)*9/5+32;
      
      printf("Nilai Kelvin dalam Celcius adalah %.2f\n",c);
      printf("Nilai Kelvin dalam Reamur adalah %.2f\n",r);
      printf("Nilai Kelvin dalam Fahrenheit adalah %.2f\n",f);
      printf("\n");
    } else if(menu == 5){
      exit(0);
    } else {
      printf("Menu yang anda input salah");
    }
  }
  return 0;
}
