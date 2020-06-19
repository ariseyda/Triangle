#include<stdio.h>

//A computer program receives length of a perpendicular isosceles triangle’s equi-length edge as an integer.
//Triangle is displayed according to entered edge length using '*' character.  

int main(){
	
	int n,i,j;
	
	printf("Please enter equi-length edge of a perpendicular isosceles triangle’s:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
	}

	
	return 0;
}
