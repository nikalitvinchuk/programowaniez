#include <iostream>
using namespace std;
#include <ctime>;

void staty(int *min, int *max, float *sr, int *ilosc, int * tablica)
{
	
	
	*ilosc=100;
	int suma=0;
	for(int i=0; i<100; i++)
	{
		suma=suma+tablica[i];
	}
	*sr=suma/(*ilosc);
	
	int m1;
	int m2;
	
    for(int i=0; i<99; i++)
	{
		if(tablica[i]<tablica[i+1])
		{
			*min=tablica[i];
		}
		else
		{
			*min=tablica[i+1];
		}

	}
	for(int i=0; i<99; i++)
	{
		if(tablica[i]>tablica[i+1])
		{
			*max=tablica[i];
		}
		else
		{
			*max=tablica[i+1];
		}
	}
}

int main()
{
	int min;
	int max;
	float sr;
	int ilosc;
	
	int tablica[100];
	srand(time(NULL));
	for(int i=0; i<100; i++)
	{
		tablica[i]=rand()%1000+100;
	}

staty (&min, &max, &sr, &ilosc, tablica);
cout<<"Œrednia wynosi: "<<sr<<endl;
cout<<"Max: "<<max<<endl;
cout<<"Min: "<<min<<endl;
	return 0;
}
