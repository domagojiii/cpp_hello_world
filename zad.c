#include <stdio.h>
#include <stdlib.h> 

int oddo(int n, int m);

int main() {
    int n, m, br;
    
    printf("Unesi donju granicu: ");
    scanf("%d", &n);
    
    printf("Unesi gornju granicu: ");
    scanf("%d", &m);

    br = oddo(n,m);

    printf("Ukupno ima %d broj djeljiv sa 6.\n", br);
    return 0;
}

int oddo(int n, int m) {
    int i, br = 0;

    printf("Ispis:\n");
    for(i = m; i>=n; i--) {
        if(i%2==0) {
            if(i%6==0) {
                br++;
            }
            printf("%d\t", i);
        }
    }
    return br;
}