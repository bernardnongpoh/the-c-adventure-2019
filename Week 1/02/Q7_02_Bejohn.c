/*Q7. WAP to add two numbers, using user defined function add.*/

#include <stdio.h>
    
#include<conio.h>
    
int add(int a, int b);       
   
int main()
    
{
        
int n1,n2,sum;
       
printf("Enters two numbers: ");
        
scanf("%d %d",&n1,&n2);
        
sum = add(n1, n2);        
        
printf("sum = %d",sum);
        
return 0;
    
}
    
int add(int a, int b)         
    
{
        
int result;
       
result = a+b;
        
return result;  
getch();
}
