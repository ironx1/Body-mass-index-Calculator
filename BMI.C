/*
	Name: BMI
	Copyright: GNU General Public License v3.0
	Author: IronXone
	Date: 12.08.22 15:21
	Description: Vucut Kitle Indeksinie Gore Ideal Kilo Durumunu Gosteren Program.
*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float kgKilo,cmBoy,bmi;
	char cikis[0];
	char dil[0];
	dil:
	printf("Dil Seciniz(Turkish(t)/English(e)): ");
	scanf("%s",&dil[0]);
	if (dil[0]!='t'&&dil[0]!='e')
	{
		printf("Hatali Secim!\n");
		goto dil;
	}
	switch(dil[0]){
		case 't':
			while(1){
		printf("Boyunuz (cm): ");
		scanf("%f",&cmBoy);
		printf("Kilonuz (kg): ");
		scanf("%f", &kgKilo);
		cmBoy = cmBoy/100.0;
		bmi = kgKilo/pow(cmBoy,2.0);
		printf("Vucut Kitle Indeksiniz=%.1f\n\n", bmi);
		if (bmi>0&&bmi<18.5)
		{
			printf("Ideal kilonuzun altindasiniz\n\n");
		}
		else if (bmi>=18.5&&bmi<25)
		{
			printf("Ideal kilonuzdasiniz\n\n");
		}
		else if (bmi>=25&&bmi<30)
		{
			printf("Ideal kilonuzun ustundesiniz\n\n");
		}
		else if (bmi>=30&&bmi<40)
		{
			printf("Obez\n");
		}
		else if (bmi>=40)
		{
			printf("Morbid Obez\n\n");
		}
		else{
			printf("Hata!\n\n");
		}
		ask:
		printf("Tekrar Olc(e/h): ");
		scanf("%s",&cikis[0]);
		if (cikis[0]=='e')
		{
			continue;
		}
		else if(cikis[0]!='h'&&cikis[0]!='e'){
			printf("Hatali Giris Yaptiniz!\n\n");
			goto ask;
		}
		else if (cikis[0]='h')
		{
			printf("Cikiliyor...\n\n");
			break;
		}
		
	}
			break;
		case 'e':
			while(1){
		printf("Height (cm): ");
		scanf("%f",&cmBoy);
		printf("Weight (kg): ");
		scanf("%f", &kgKilo);
		cmBoy = cmBoy/100.0;
		bmi = kgKilo/pow(cmBoy,2.0);
		printf("The Body Mass Index=%.1f\n\n", bmi);
		if (bmi>0&&bmi<18.5)
		{
			printf("Underweight\n\n");
		}
		else if (bmi>=18.5&&bmi<25)
		{
			printf("Normal\n\n");
		}
		else if (bmi>=25&&bmi<30)
		{
			printf("Overweight\n\n");
		}
		else if (bmi>=30&&bmi<40)
		{
			printf("Obese\n");
		}
		else if (bmi>=40)
		{
			printf("Extremly Obese\n\n");
		}
		else{
			printf("Error!\n\n");
		}
		askEn:
		printf("Calculate Again(y/n): ");
		scanf("%s",&cikis[0]);
		if (cikis[0]=='y')
		{
			continue;
		}
		else if(cikis[0]!='n'&&cikis[0]!='y'){
			printf("Hatali Giris Yaptiniz!\n\n");
			goto askEn;
		}
		else if (cikis[0]='n')
		{
			printf("Exiting...\n\n");
			break;
		}
		
	}
			break;
	}
	
	return 0;
}
