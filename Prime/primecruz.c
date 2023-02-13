#include<stdio.h>
#include<conio.h>
main()
{
int N,Q,P;
printf("input N:");
scanf("%d",&N);
Q=0;
P=2;
while(P<=N/2){
if(N%P==0){
Q=1;
}
P++;
}
if(N==1){
printf("1 is either a prime nor a composite number ");
}
else{
}
if(Q==0 && N!=1){
printf("Prime");
}
else if(N!=1){
printf("Not Prime");
}
getch();
}
