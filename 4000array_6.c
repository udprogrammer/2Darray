#include<stdio.h>

main()
{
	int i,j,clu_sum;
	int a[3][3] = {{1,2,3},
	               {4,5,6},
				   {7,8,9}};
	for(i=0;i<3;i++){ 
	   clu_sum=0;
        for(j=0;j<3;j++){
            clu_sum=clu_sum+a[j][i];
        }
        printf("\nSum of all the elements in coulmn %d is %d",i,clu_sum);
    }
}
