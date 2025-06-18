#include <stdio.h>

void main() {
    int n, i, j, oddCount = 0, evenCount = 0;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter %d elements:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    printf("Total Even elements: %d\n", evenCount);
    printf("Total Odd elements: %d\n", oddCount);
    
    
    
    
    
    
    
    // int a,b,c;
    // printf("Enter the value of a : ");
    // scanf("%d", &a);
    // printf("Enter the value of b : ");
    // scanf("%d", &b);
    // printf("Enter the value of c : ");
    // scanf("%d", &c);

    // if (a>b)
    // {
    //     if (b>c)
    //     {
    //         printf("Asc %d,%d,%d",a,b,c);
    //         printf("Des %d,%d,%d",c,b,a);
    //     }
    //     else{
    //         if (a>c)
    //         {
    //             printf("Asc %d,%d,%d",a,c,b);
    //             printf("Des %d,%d,%d",b,c,a);
    //         }
    //         else{
    //             printf("Asc %d,%d,%d",c,a,b);
    //             printf("Des %d,%d,%d",b,a,c);
    //         }
            
    //     }
        
    // }
    // else{
    //     if (a>c)
    //     {
    //         printf("Asc %d,%d,%d",b,a,c);
    //         printf("Des %d,%d,%d",c,a,b);
    //     }
    //     else{
    //         if (b>c)
    //         {
    //             printf("Asc %d,%d,%d",b,c,a);
    //             printf("Des %d,%d,%d",a,c,b);
    //         }
    //         else{
    //             printf("Asc %d,%d,%d",c,b,a);
    //             printf("Des %d,%d,%d",a,b,c);
    //         }
            
    //     }
        
    // }
    
    
    
}