#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;
    scanf("%d", &n);
    int vetor[n];

    for (p = vetor; p < vetor+n; p++){
        scanf("%d", p);
    }

    for (p = vetor + n - 1; p >= vetor; --p){
        printf("%d ", *p);
    }
    return 0;
}
