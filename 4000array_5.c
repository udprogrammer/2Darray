#include<stdio.h>

main()
{
	int i,j,rsum;
	int a[3][3] = {{1,2,3},
	               {4,5,6},
				   {7,8,9}};
	for(i=0;i<3;i++){ 
	   rsum=0;
        for(j=0;j<3;j++){
            rsum=rsum+a[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
}
