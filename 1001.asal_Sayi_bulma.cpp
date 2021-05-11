#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main(){
	unsigned int* asal = NULL;
	asal = new unsigned int(10001);
	int bolum_sayac=0;
	unsigned int sayi=1,j=0,sira=1;
	while(sira<5000)
{
	bolum_sayac=0;
     sayi = sayi+1;
	for(int i=2;i<sayi;i++){
      if((sayi%i)==0)
         {
          bolum_sayac++;
          break;
         }
     }
         if(bolum_sayac==0){
         	cout<<sira<<"."<<"sayi="<<sayi<<endl;
         	sira = sira+1;
		 }
		 }
		 	while(j<5002)
{
	bolum_sayac=0;
     sayi = sayi+1;
	for(int i=2;i<sayi;i++){
      if((sayi%i)==0)
         {
          bolum_sayac++;
          break;
         }
     }
         if(bolum_sayac==0){
         	asal[j]=sayi;
         	cout<<sira<<"."<<"sayi="<<sayi<<endl;
         	sira = sira+1;
         	j=j+1;
		 }
		 }
     cout<<"-----------------------------------------------------------------"<<endl;
     cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
     cout<<"10001. asal sayi=  "<<asal[j-1]<<endl;
     delete []asal;
	      return 0;
 }
