#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    int i;
    scanf("%d", &i);
    int N[i];
    for( int x=0 ; x<i ; x++)
    {
        scanf("\n %d", &N[x]);
    }
    for(int j=0 ; j<i ; j++)
    {
        int count=0;

        while(N[j]>0)
        {
            if(N[j]%2 !=0)
            {
                count++;
            }
            N[j]/=2;
        }
        printf("\n%d" , count);


    }
return 0;
}




