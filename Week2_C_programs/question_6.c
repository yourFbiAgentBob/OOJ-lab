#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 
void main()
{
    int ch,flag=1;
    float side, base, length, breadth, height, area ,volume, radius;
 while(flag==1)
 {
    printf("-------------------------\n");
    printf(" 1 --> Cylinder\n");
    printf(" 2 --> Code\n");
    printf(" 3 --> Sphere\n");
    printf(" 4 --> Exit\n");
    printf("! considering units as cm^2 for all inputs\n");
    printf("-------------------------\n");
    
    printf("Enter an option\n");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        printf("Enter the height\n");
        scanf("%f", &height);
        area = (2*3.142*radius*radius)+2*3.142*radius*height;
        printf("Area of the cylinder = %f\n", area);
        volume = (3.142*radius*radius*height);
        printf("Volume of the cylinder = %f\n",volume);
        getch();
        break;
    case 2:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        printf("Enter the height\n");
        scanf("%f", &height);
        area = (3.142*radius)*(radius + sqrt(radius*radius+height*height));
        printf("Area of the cone = %f\n", area);
        volume = (3.142*radius*radius*height)/3;
        printf("Volume of the cone = %f\n", volume);
        getch();
        break;
    case 3:
        printf("Enter the radius\n");
        scanf("%f", &radius);
       
        area = (4*3.142*radius*radius);
        printf("Area of the sphere = %f\n", area);
        volume = (4/3)*(3.142*radius*radius*radius);
        printf("Volume of the sphere = %f\n",volume);
        getch();
        break;
    case 4:
        printf("Exiting the program...\n");
        flag=0;
        getch();
        break;
        
    default:
        printf("Error in figure code, exiting..\n");
        flag=0;
        getch();
        break;
    }
 }
}
