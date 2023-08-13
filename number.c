#include<stdio.h>

int main()
    {
        int n =5;
        for(int i=1;i<=5;i++)
            {
                if(i%2==0)
                    printf("%2d", i+1);
                for(int j=1; j<=6; j++)
                    printf("%2d", i);
                if(i%2 != 0)
                    printf("%2d", i+1);
                printf("\n");
            }
    }