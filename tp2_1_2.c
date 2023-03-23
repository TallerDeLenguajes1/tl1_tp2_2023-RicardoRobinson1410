#include<stdio.h>
#include<stdlib.h>
// codigo a completar
#define N 20
int main(){
int i;
int vt[N];
int* punt;
punt=vt;
for(i = 0;i<N; i++)
{
*punt=1+rand()%100;
printf(" %d ", *punt);
}
return 0;
}