#include<stdio.h>
#include<conio.h>
#include<math.h>
main( )
{
	int fahr;
int celsius;
	int low,upper,step;
	low=0;
	upper=300;
	step=20;
	fahr=low;
	while(fahr<=upper)
	{
		celsius=5*(fahr-32)/9;
		printf("%d \t %d \n",fahr,celsius);
		fahr=fahr+step;
	}
		}