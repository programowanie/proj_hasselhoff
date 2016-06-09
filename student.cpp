#include "student.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;

void student::wydarzenie()
{
	 vector<string> wydarzenia;
	 ifstream plik;
	 string akcja="";
	 plik.open("wydarzenia.csv");
	 int p=rand()%35+1;
			
			while(getline(plik, akcja,';'))  
			{
				wydarzenia.push_back(akcja);
			}
			
			for(int i=p*4;i<p*4+4;i++)		
			{
			int t=i-p*4;
			if(wydarzenia[i].empty())
			break;	
			switch(t)
			{
			
			case 0: cout<<"Zdarzenie losowe: "<<wydarzenia[i]<<endl;
					printf("---------------------------------------\n"); 			
			break;
			case 1: w_zdrowie_psychiczne=atof(wydarzenia[i].c_str());
			break;
			case 2: w_zdrowie_fizyczne=atof(wydarzenia[i].c_str());
			break; 
			case 3: w_stan_konta=atoi(wydarzenia[i].c_str());
			break;
			}
			}
		
		plik.close();	
	}
	
	

void student::wyswietl()
{
	printf("\nMiesiac roku akademickiego: %d\n",miesiac);
	printf("\nStatystyki studenta:\n");
	printf("\nSila woli:%d",sila_woli);
	printf("\nKondycja:%d\n\n",kondycja);
	printf("\nStan studenta:\n");
	printf("\nZdrowie psychiczne:%.2f",zdrowie_psychiczne);
	printf("\nZdrowie fizyczne:%.2f",zdrowie_fizyczne);

	printf("\nStan konta studenta:%d\n\n",stan_konta);
}

void student::jaki_miesiac()
{

	float mnoznik_kondycji=(100-kondycja);
	float mk=mnoznik_kondycji/100;
	float mnoznik_sily_woli=(100-sila_woli);
	float msw=mnoznik_sily_woli/100;
	stan_konta=stan_konta-400+w_stan_konta;
	zdrowie_psychiczne=zdrowie_psychiczne-(8-w_zdrowie_psychiczne)*msw;
	zdrowie_fizyczne=zdrowie_fizyczne-(6-w_zdrowie_fizyczne)*mk;
	miesiac++;
}

student::student()
{
	zdrowie_psychiczne=100;
	zdrowie_fizyczne=100;
	stan_konta=4000;
	miesiac=1;
	w_stan_konta=0;
	w_zdrowie_psychiczne=0;
	w_zdrowie_fizyczne=0;
	sila_woli=rand()%30;
	kondycja=rand()%30;
}

