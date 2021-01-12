#include <stdio.h>

int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++){
        for(j=0;j<i;j++){
            if((i%2==0 && j%2==0) || (i%2==1 && j%2==1))
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}
