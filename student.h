#ifndef STUDENT_H
#define STUDENT_H


class student
{
	public:
	
	int sila_woli; // od 0 do 30 odpowiada za szybkosc tracenia zdrowia psychicznego
	int kondycja; // odpowiada za szybosc tracenia zdrowia fizycznego

	
	
	float zdrowie_psychiczne; //od 0 do 100
	float zdrowie_fizyczne; //od 0 do 100 
	int stan_konta; 
	
	int w_stan_konta;
	int w_zdrowie_psychiczne;//efekt wydarzen
	int w_zdrowie_fizyczne;
	int miesiac; //9 miesiecy w semestrze to 9 tur symulacji
	
	student();
	void wydarzenie();
	void jaki_miesiac();
	void wyswietl();
};



#endif