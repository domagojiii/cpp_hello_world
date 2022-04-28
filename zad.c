#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int duljina = 0;
    int i,j,k,g;
    int n;
    int broj = 1;
    int zbroj = 0;
    
    
    printf("Unesi neparni broj [7,17]: ");
    scanf("%d", &n);
    
    while ((n < 7 || n > 17) || n % 2 != 1) {
        printf("Unesi neparni broj [7,17]: ");
        scanf("%d", &n);
    }
    
    int zvijezdice = (n * 2) - 3;
    
    for(i=1;i<n+1;i++) {
        for(j=0;j<i;j++) {
            printf("%d", broj++);
        }
        
        for(k=0;k<zvijezdice;k++){
            printf("*");
        }
        
        if(i == n) {
            broj -= 1;
        }
        
        for(g=0;g<i;g++) {
            
            broj -= 1;
            if(broj != 0)
            printf("%d", broj);
            
        }
        
        zbroj += i * 2;
        if(i == n)
        zbroj = zbroj - i;
        
        
        broj = 1;
        printf("%4d",zbroj);
        printf("\n");
        zvijezdice = zvijezdice - 2;
    }
    
    return 0;
}

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
