//ukázka break, continue a switch 
//dn
#include <stdio.h>

int main(void)
{
	printf("BREAK\n");
	for (int j = 1; j <= 3; j++) {
		printf("j: %d\n", j);
		for (int i = 0; i <= 100; i++) {
			printf("%d ", i);
			if (i > 10) break;
		}
		printf("\n");
	}
	printf("CONTINUE \n");
	int i = 0;
	while (i < 100) {
		i++;
		if (i < 10) continue;
			printf("%d ", i);
	}
	printf("\n");
	printf("DO\n");
	printf("smycka do: \n");
	i = 0;
	do {
		printf("%d ", i);
		i++;
	} while (i < 10);
}
