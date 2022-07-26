#include <stdio.h>
#include <stdlib.h>

int main()
{
	// declare and initialize the 2-dim array with rainfall information by year
	double rainfall[5][12] = 
	{
		{23.5, 16.9, 44.6, 60.3, 18.4, 40.0, 33.9, 17.4, 15.9, 10.1, 15.6, 9.2},
		{40.7, 20.8, 33.6, 50.4, 22.5, 67.4, 26.6, 45.3, 37.8, 20.9, 44.1, 15.9},
		{10.5, 34.2, 12.4, 8.9, 11.1, 5.2, 16.7, 10.0, 8.8, 2.7, 13.3, 6.6},
		{109.1, 99.3, 85.9, 72.7, 65.8, 119.1, 138.4, 88.9, 55.6, 76.5, 90.0, 54.3},
		{22.5, 18.9, 44.1, 66.3, 18.9, 40.2, 33.5, 17.3, 15.8, 10.2, 15.1, 9.9}
	};

	// declare other variables
	double avgYear[5];
	double avgMonth[12];

	double sumYear;
	double sumMonth;


	// do the calculations by year
	sumYear = 0.0;
	for (int i = 0; i < 5; i++)
	{
		sumMonth = 0.0;
		for (int j = 0; j < 12; j++)
		{
			sumMonth += rainfall[i][j];
		}
		avgYear[i] = sumMonth / 12;

	}

	// do the calculations by month
	for (int i = 0; i < 12; i++)
	{
		sumYear = 0.0;
		for (int j = 0; j < 5; j++)
		{
			sumYear += rainfall[j][i];
		}
		avgMonth[i] = sumYear / 5;
		
	}
	
	// print results
	printf("YEAR   RAINFALL (inches)\n");
	printf("2010      %.1f\n", avgYear[0]);
	printf("2011      %.1f\n", avgYear[1]);
	printf("2012      %.1f\n", avgYear[2]);
	printf("2013      %.1f\n", avgYear[3]);
	printf("2014      %.1f\n\n", avgYear[4]);
	printf("The yearly average is %.1f\n\n", (avgYear[0]+avgYear[1]+avgYear[2]+avgYear[3]+avgYear[4]) / 5);
	printf("MONTHLY AVERAGES\n\n");
	printf("Jan  Fev  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	printf("%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f\n\n", avgMonth[0], avgMonth[1], avgMonth[2],
			avgMonth[3], avgMonth[4], avgMonth[5], avgMonth[6], avgMonth[7], avgMonth[8],
			avgMonth[9], avgMonth[10], avgMonth[11]);

	return (0);
}