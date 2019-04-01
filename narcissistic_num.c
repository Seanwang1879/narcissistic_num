#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE    1000
void narcissistic_num();

void main()
{
	narcissistic_num();
}

void narcissistic_num()
{
	int i,j,k;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){ 
			for(k=0; k<10; k++){
				if(i==0 && j==0){
					printf("this num %d is narcissistic num\n",k);
				}else if(i==0){
					if(j*10+k == j*j+k*k){
						printf("this num %d is narcissistic num\n",j*10+k);
					}
				}else {
					if(i*100+j*10+k == i*i*i+j*j*j+k*k*k){
						printf("this num %d is narcissistic num\n",i*100+j*10+k);
					}
				}
			}
		}
	}
	return ;
}