#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "student.h"
#include "student.cpp"

using namespace std;

int main()
{
	
	srand(time(NULL));
	student student1;
	printf("Poczatek roku akademickiego\n\n");

	bool stan_symulacji=true;
	while(stan_symulacji==true)
	{
		
		student1.wyswietl();
		student1.wydarzenie();
		student1.jaki_miesiac();
		
		
		if(student1.zdrowie_psychiczne<1)
		{
		stan_symulacji=false;
		printf("\nStudent nie wytrzyma³ psychicznie, musi przerwac studia\n");
		}
		if(student1.zdrowie_fizyczne<1)
		{
		stan_symulacji=false;
		printf("\nOrganizm studenta nie wytrzymal obciazen,student musi przerwac studia\n");
		}
		if(student1.stan_konta<1)
		{
		stan_symulacji=false;
		printf("\nStudent zbankrutowal, konczy studia i rusza na zmywak\n");
		}
		if(student1.miesiac>9)
		{
		stan_symulacji=false;
		printf("\nUdalo sie przetrwac pierwszy rok!\n");
		}
	}		
}


