#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);

    if (n%400==0)
        printf("TRUE\n");
    else if (n%100==0)
        printf("FALSE\n");
    else if(n%4==0)
        printf("TRUE\n");
    else
        printf("FALSE\n");

}
