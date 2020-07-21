#include<stdio.h>
#define N 3

float aritmeticky_priemer(float *data,int l);


int main ()
{
 float data[3]={1,8,6};

printf("%f", aritmeticky_priemer(data,N));


}

float aritmeticky_priemer(float *data,int l)
{
	double suma=0;	
	float priemer1 = 0;
	
	printf("Dlzka pola je %d\n", l);
	
	int i;
	for( i = 0; i<l; i++)
	{
		suma += data[i];
		printf("Hodnota SUMA v %d cykle je: %f\n", i, suma);
		priemer1=suma/l;
	}

	return priemer1;
}
