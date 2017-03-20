#include<stdio.h>

int main ()
{
	char table[7][3]={"mon","tur","wde","thu","fri","sat","sun"};
	int i,num,c=0;
	for(i=0;i < 7;i++){
		for(num=0;num < 3;num++){
			if(num==0)
			printf("table[%d][%d] = ",i,num);
			if(c==2){	
				printf("%c\n",table[i][num]);
				c = 0;
			}
			else{
				printf("%c",table[i][num]);
				c++;
			}
		}
	}
	return 0;
}