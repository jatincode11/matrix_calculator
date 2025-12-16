#include <stdio.h>
int main() {
    int choice;
    int m, n, p, q;
    printf("MATRIX CALCULATOR\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {

        // ADDITION
        printf("\nEnter rows and columns of matrices: ");
        scanf("%d %d", &m, &n);

        int A[m][n], B[m][n], C[m][n];

        printf("Enter Matrix A:\n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &A[i][j]);

        printf("Enter Matrix B:\n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &B[i][j]);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                C[i][j] = A[i][j] + B[i][j];

        printf("\nResult (A + B):\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                printf("%d ", C[i][j]);
            printf("\n");
        }
    }

    else if (choice == 2) {

        // SUBTRACTION
        printf("\nEnter rows and columns of matrices: ");
        scanf("%d %d", &m, &n);

        int A[m][n], B[m][n], C[m][n];

        printf("Enter Matrix A:\n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &A[i][j]);

        printf("Enter Matrix B:\n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &B[i][j]);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                C[i][j] = A[i][j] - B[i][j];

        printf("\nResult (A - B):\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                printf("%d ", C[i][j]);
            printf("\n");
        }
    }

    else if (choice == 3) {

        // MULTIPLICATION
        printf("\nEnter rows and columns of Matrix A: ");
        scanf("%d %d", &m, &n);

        printf("Enter rows and columns of Matrix B: ");
        scanf("%d %d", &p, &q);

        if (n != p) {
            printf("\nMultiplication NOT possible!\n");
            return 0;
        }

        int A[m][n], B[p][q], C[m][q];

        printf("Enter Matrix A:\n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &A[i][j]);

        printf("Enter Matrix B:\n");
        for (int i = 0; i < p; i++)
            for (int j = 0; j < q; j++)
                scanf("%d", &B[i][j]);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < q; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }

        printf("\nResult (A * B):\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++)
                printf("%d ", C[i][j]);
            printf("\n");
        }
    }

    else {
        printf("\nInvalid Choice!");
    }

    return 0;
}
