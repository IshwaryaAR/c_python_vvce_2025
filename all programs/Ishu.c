#include<stdio.h>
void main()
{
    int N=10;
    int K=5;
    int candies_ordered;
    printf("enter the candies_ordered");
    scanf("%d",&candies_ordered);
    if(candies_ordered>N||candies_ordered<=0)
    {
        printf("INVALID INPUT");
        printf("candies remaining %d",candies_ordered);

    }
    else{
        printf("candies sold %d",candies_ordered);
        printf("candies remaining %d",N-candies_ordered);

    }




















}