#include<stdio.h>
#include<conio.h>
int main()
{
// function declaration

int largestNumberOf3(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}

void sumavg(int a, int b)
{ 
printf("the average is : %d \n", ((a+b)/2));
printf("the sum is : %d  \n",(a+b));
}
void printeven(int a, int b)
{
int i;
	printf("Even numbers between %d to %d (inclusive): " ,b,a);
	for (i = b; i <= a; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}

    
}
int largestNumberOf2(int a,int b)
{
	int largest=0;
	if(a>b)
		largest=a;
	else if(b>a)
		largest=b;
	
	return largest;
}
//function call
int n1,n2,n3,x,y,flag;
printf("Enter three numbers: \n");
scanf("%d%d%d",&n1,&n2,&n3);
x = largestNumberOf3(n1,n2,n3);

if (x==n1)
y = largestNumberOf2(n2,n3);
else if(x==n2)
y = largestNumberOf2(n1,n3);
else
y =largestNumberOf2(n1,n2);


printf("the largest two of the given three are %d and %d \n",x,y);
sumavg(x,y);
printeven(x,y);


return 0;
}