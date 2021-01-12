#include <stdio.h>

int main()
{
    int i,j,k=0;
    for(i=1;i<5;i++){
        for(j=0;j<i+k;j++){
            if(j%2==0)
                printf("%d",i);
            else
                printf("*");
        }
        printf("\n");
        k++;
    }
    return 0;
}
