#include <stdio.h>
#include<stdlib.h>
#define N 5
#define M 7
int main(){
int i,j;
int mt[N][M];
int* punt;
for(i = 0;i<N; i++)
{
for(j = 0;j<M; j++)
{
*punt=1+rand()%100;
printf(" %d ", *punt);
punt++;
}
printf("\n");
}
return 0;
}