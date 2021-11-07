
#include <stdio.h>
#include <math.h>

int main(void) {
	int vstup, a, b, c;
	int s;
	printf("Vyber si:\n"); 
	printf("1) trojuhelnik\n");
	printf("2) obdelnuik\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);

	if (vstup == 1) {
		//resime trojuhelnik
		printf("Zadej delku strany a: ");
		scanf("%d", &a);
		printf("Zadej delku strany b: ");
		scanf("%d", &b);
		printf("Zadej delku strany c: ");
		scanf("%d", &c);

		// Existuje trojuhelnik
		if (a + b > c && a + c > b && b + c > a) {
			printf("Trojuhelnik existuje \n ");
		}
		else {
			printf("Trojuhelnik neexistuje \n ");
		}

		// Je trojuhelnik pravouhly
		if (c * c == a * a + b * b || b * b == a * a + c * c || a * a == b * b + c * c) {
			printf("Trojuhelnik je pravouhly \n ");
		}
		else {
			printf("Trojuhelnik neni pravouhly \n ");
		}
		printf("Obvod: %d\n", a + b + c);
		s = (a + b + c) / 2;
		printf("Obsah: %f\n", sqrt(s * (s - a)*(s - b)*(s - c)));
	}
	else if (vstup == 2) {
		//resime obdelník
		printf("Zadej delku strany: ");
		scanf("%d", &a);
		printf("Zadej delku strany: ");
		scanf("%d", &b);
		if (a == b); {
			//je to čtverec
			printf("Je to ctverec: ");
		}
		printf("Obvod: %d\n", 2 * a + b);
		printf("Obsah: %d\n", a * b);
	}
	else {
		//resime kruznici
		printf("Zadej polomer: ");
		scanf("%d", &a);
		printf("Obvod: %d\n", 3.14 * 2 * a);
		printf("Obsah: %d\n", 3.14 * a * a);
	}
}
 
