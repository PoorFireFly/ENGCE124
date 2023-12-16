/* 
Program Recursion can..
1. Calculate M^N Function
2. Show each step of recursive result
3. Show final result
=======================================================================
=========
*/
#include <stdio.h>
#include <conio.h>

int m, n, ans;

int Pow(int M, int N) {
    int x, y;
    if (N == 0) {
    	printf("========== POP ===========\n");
        return 1;
    } else {
        x = N - 1;
        printf( "%2d ^ %2d = %2d * %d^%d\n",  M , N,  M, M, x) ;
        y = Pow(M, x) ;
        printf( "%2d * %2d  = %d\n" , M , y, M * y ) ;
        return M * y;
    }
}

int main() {
    printf("RECURSIVE POWER CALCULATOR\n");
    printf("===========================\n");

    while (m != -999) {
        printf("Enter (M) Number: ");
        scanf("%d", &m);
        printf("Enter (N) Number: ");
        scanf("%d", &n);
        if (m >= 0 && n >= 0) {
            ans = Pow(m, n);
            printf("\nAnswer %d^%d = %d\n", m, n, ans);
            printf("----------------Finished\n");
            getch();
        }
    }
    return 0;
}

