#include <stdio.h>

int main()
{
	int n;
	printf("Enter n:\n");
	scanf_s("%d", &n);

	double x = 1.0;
	double y = 1.0;
	double sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		sum += x / (1.0 + y);
		y += x;
		x *= 0.3;
	}

	printf("S = %lf", sum);

	getch();
	return 0;
}