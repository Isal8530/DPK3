#include <stdio.h>
#include <stdlib.h>

int main () {
    int A[4][4];
    int X[4];
    int C[4];
    int i, j;

    printf("Masukkan elemen matriks A (4x4): \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++); {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

  
    printf("\nMasukkan elemen vektor X: \n");
    for (i = 0; i < 4; i++) {
        printf("X[%d] = ", i);
        scanf("%d", &X[i]);
    }

    
    for (i = 0; i < 4; i++) {
        C[i] = 0;
        for (j = 0; j < 4; j++) {
            C[i] += A[i][j] * X[j];
        }
    }

   
    printf("\nMatriks A: \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    
    printf("\nVektor X:\n");
    for(i = 0; i < 4; i++) {
        printf("\n%d", X[i]);
    }

   
    printf("\nHasil C = A * X:\n");
    for (i = 0; i < 4; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
