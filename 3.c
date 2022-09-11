#include<stdio.h>

#define 	ADD			'A'
#define		SUBTRACT	'S'	
#define		MULTIPLY	'M'
#define		DIVIDE		'R'
/***********************************************************************************************/
int main()
{
	//Variables
	int iOperand1;
	int iOperand2;
	
	int iSum;
	int iDifference;
	int iProduct;
	int iQuotnt;
	char cOption;
	
	//Functions
	int iAdd(int x, int y);
	int iSubtract(int x, int y);
	int iMultiply(int x, int y);
	int iDivide(int x, int y);
	char cMenu();
	
	cOption = cMenu();		//Read Option
	printf("Option is %c\n",cOption);
	iOperand1 = 90;
	iOperand2 = 50;
	printf("*****************************************\n");
	switch(cOption)
	{
		case ADD	:	printf("Addition\n");
						iSum = iAdd(iOperand1,iOperand2);
						printf("Sum of %d and %d is %d\n",iOperand1,iOperand2,iSum);
		break;
		
		case SUBTRACT   :  printf("Subtraction\n");
	                       iDifference=iSubtract(iOperand1,iOperand2);
	                       printf("difference of %d and%d is %d\n",iOperand1,iOperand2,iDifference);
	    break; 
		case MULTIPLY   :   printf("product\n");
							iProduct=iMultiply(iOperand1,iOperand2);
							printf("product of%d and%d is%d\n",iOperand1,iOperand2,iProduct);
		break;    
		case DIVIDE     :	printf("Quotnt\n");
							iQuotnt=iDivide(iOperand1,iOperand2);
							printf("division of %d and%d is %d\n",iOperand1,iOperand2,iQuotnt);
		break;
		
	}
	printf("*****************************************\n");
	return(0);

}
/**************************************************************************************************
Function :	MENU()
output 	 :	returns the Arithmatic operation to be performed                  
/**************************************************************************************************/
char cMenu()
{
	char cOption;
	printf("*****************************************\n");
	printf("A. Addition\n");
	printf("S. Subtraction\n");
	printf("M. Multiplication\n");
	printf("D. Division\n");
	printf("******************************************\n");
	printf("Enter Your Choice\n");
	scanf("%c",&cOption);
	return cOption;
}

/**************************************************************************************************
Function :	Add()
output 	 :	returns the sum of the two numbers                 
/**************************************************************************************************/
int iAdd(int x, int y)
{
	return x+y;
}
/**************************************************************************************************
Function :	Subtract()
output 	 :	returns the difference of the two numbers                 
/**************************************************************************************************/
int iSubtract(int x, int y)
{
	return x-y;
}
/**************************************************************************************************
Function :	Multiply()
output 	 :	returns the product of the two numbers                 
/**************************************************************************************************/
int iMultiply(int x, int y)
{
	return x*y;
}
/**************************************************************************************************
Function : division()
output   : returns the quotnt of two numbers
/**************************************************************************************************/
int iDivide(int x, int y)
{
	return x/y;
}		
