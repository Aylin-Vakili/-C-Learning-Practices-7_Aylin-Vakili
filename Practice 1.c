#include <stdio.h>

int main()
{
	int a[ ] = { 45, 32, 200, 56, 47 };
	int n = 5, i, j, t = 0;


	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (a[i] < a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
//Made by Aylin Vakili - Student number : 14025141115 - Practice 1
