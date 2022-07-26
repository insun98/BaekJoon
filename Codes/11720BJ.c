#include <stdio.h>
#include <stdlib.h>
int main(){
int count=0, sum=0;
scanf("%d",&count);
char number[count];
scanf("%s", number);
for(int i=0; i<count;  i++){
	int singleNum = number[i] - '0';
	sum = sum + singleNum;
}
printf("%d", sum);
}
