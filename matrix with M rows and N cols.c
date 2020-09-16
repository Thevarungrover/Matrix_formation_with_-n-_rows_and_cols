#include<stdio.h>
main()
{
	int m,n;
	printf("Enter number of rows :");
	scanf("%d",&m);
	printf("Enter number of columns :");
	scanf("%d",&n);
if(m==m) // Condition for square matrix
{
	// Initialize variables
	int ary[m][n]; // Array for m*n matrix
	int i=0,j=0;
	int sum=0; // Variable to store sum of diagonal values
	printf("Enter numbers to create %d*%d matrix :",m,n); 	// Printing some text to give info to user
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			 printf("\nelement - [%d] [%d] :",i,j); 	// Printing arrays of elements
			scanf("%d",&ary[i][j]); // Reading input from user
		}
	}
	// Showing matrix formed
	printf("\nThe matrix is :");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
		printf("%d\t",ary[i][j]);
		}
		printf("\n");
	}
	// Finding sum of diagonal elements
	for(i=0;i<m;++i)
	{
		sum=sum+ary[i][i];	
	}
	// printing sum
	printf("The sum of diagonal elements is %d.",sum);
}
else
{
	printf("Enter the correct square matrix!!!!!");
}
	
}
