#include<stdio.h>

main()
{
	int i,j,sum=0;
	int a[5][5] = {{1,2,3,4,5},       //00 01 02 03 04
	               {6,7,8,9,10},      //10 11 12 13 14
				   {11,12,13,14,15},  //20 21 22 23 24
				   {16,17,18,19,20},  //30 31 32 33 34
				   {21,22,23,24,25}}; //40 41 42 43 44
	for(i=0;i<5;i++){ 
        for(j=0;j<5;j++){
        	if(i == 0 || j == 0 || i == (5-1) || j == (5-1)){	
			}
			else{
				sum=sum+a[i][j];
			}
        }
    }
    printf("sum of all boundary elements of 5X5 array = %d ",sum);
}
