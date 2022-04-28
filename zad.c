#include <stdio.h>
#include <stdlib.h>

int main() {
	int polje1[100], polje2[100], polje3[100];
	int uneseno = 0;
	int i = 0;
	do {
		printf("unesi broj:");
		scanf("%d", &polje1[i]);
		if(polje1[i] == 0 && i < 7) {
			printf("nije uneseno 7 brojeva.");
		} else{
			i++;
		}
	} while(polje1[i-1] > 0 || i < 7);
	i -= 1;
	int sum = 0;
	for(int j=0; j<i; j++) {
		sum += polje1[j];
	}
	printf("aritmeticka sredina je: %d\n", sum/i);
	int i1 = 0, i2 = 0;
	for(int j=0; j<i; j++) {
		if(polje1[j] < sum/i) {
			polje2[i1] = polje1[j];
			i1++;
		} else {
			polje3[i2] = polje1[j];
			i2++;
		}
	}
	for(int j=0; j<i1; j++) {
		int min = polje2[j];
		int index = j;
		for(int k=j; k<i1; k++) {
			if(polje2[k] < min) {
				min = polje2[k];
				index = k;
			}
		}
		polje2[index] = polje2[j];
		polje2[j] = min;
	}
	for(int j=0; j<i1; j++) {
		printf("%d, ", polje2[j]);
	}
	printf("\n");
	for(int j=0; j<i2; j++) {
		int max = polje3[j];
		int index = j;
		for(int k=j; k<i2; k++) {
			if(polje3[k] > max) {
				max = polje3[k];
				index = k;
			}
		}
		polje3[index] = polje3[j];
		polje3[j] = max;
	}
	for(int j=0; j<i2; j++) {
		printf("%d, ", polje3[j]);
	}
	return 0;
}