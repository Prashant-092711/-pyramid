#include<stdio.h>

int main()
{
    int tri,a,b,c;
    printf("Enter the heiht of triangle:");
    scanf("%d",&tri);
    for(a=1;a<=tri;a++)
    {
        for(b=1;b<=(tri-a);b++)

            printf(" ");
            for(c=1;c<=((2*a)-1);c++)
                printf("*");
                printf("\n");


    }
}
