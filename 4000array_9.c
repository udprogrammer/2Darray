#include<stdio.h>

main()
{
	int i,j,sum=0,sum1=0,sum3;
	int a[3][3] = {{1,2,3},
	               {4,5,6},
				   {7,8,9}};
				   
	for(i=0;i<3;i++){ 
        for(j=0;j<3;j++){
            if(i==j){
              sum = sum +a[i][j];    
			}
        } 
    }
    printf("diagonal sum of 2D array = %d\n",sum);
	for(i=0;i<3;i++){ 
        for(j=0;j<3;j++){
           if(i+j == ((3+1)-2)){
                sum1 = sum1 + a[i][j];
            }
        } 
    }
    printf("Anti-diagonal sum of 2D array = %d",sum1);
    sum3 = sum +sum1;
    printf("cross-diagonal sum of 2D array = %d",sum3);
}
