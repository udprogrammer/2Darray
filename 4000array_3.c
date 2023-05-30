#include<stdio.h>

main()
{
	int i,j,sum=0,avg=0;
	int a[3][3] = {{1,2,3},
	               {4,5,6},
				   {7,8,9}};
				   
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum = sum + a[i][j];
		}
	}
	avg = sum / (i*j);
	printf("%d",avg);  
}
