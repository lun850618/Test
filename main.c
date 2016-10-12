#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n;
    printf("Please Input A Number:");
    scanf("%d",&n);
    
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++) {
            printf(" ");
        }
        for (j=1; j<=2*i-1; j++) {
            printf("x");
        }
        for (k=1; k<=i-1; k++) {
            for (j=1; j<=2*n-2*i; j++) {
                printf(" ");
            }
            for (j=1; j<=2*i-2*k-1; j++) {
                printf("x");
            }
        }
        printf("\n");
    }
    printf("1211213232321");
    system("pause");
    return 0;
}
