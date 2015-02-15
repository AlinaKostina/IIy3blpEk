// puzyrjok izmenen
// pravda

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include <clocale>
#include "math.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int n,j=0,i=0,f,c=0;
	puts ("vvedite razmernost'");
	scanf_s ("%d", &n);
	int *a = new int [n];
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);

	}
	for (i=0;i<n;i++)
	{
		printf ("%d", a[i]);
		printf(" ");
	}
	f=1;
	i=0;
	while ((i<n-1)&&(f==1)) 
	{
		f=0;
		for (j=0; j<n-i-1; j++)
			if (a[j]>a[j+1])
			{
			f=1;
			c=a[j];
			a[j]=a[j+1];
			a[j+1]=c;
			}
		i++;
	}
	puts ("\n new mass");
	for (i=0;i<n;i++)
	{
		printf ("%d ", a[i]); 
	}


   _getch();

	return 0;
}

