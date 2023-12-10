#include<stdio.h>  
#include<conio.h>  

int main(void)  
{  
    int kytu=65;  
    int i,j,k,m;  

    for(i=1;i<=5;i++)  
    {  
        for(j=5;j>=i;j--)  
            printf(" ");  
        for(k=1;k<=i;k++)  
            printf("%c",kytu++);  
            kytu--;  
        for(m=1;m<i;m++)  
            printf("%c",--kytu);  
        printf("\n");  
        kytu=65;  
    }  
    printf("\n\n===========================\n");
    printf("Hoclaptrinh chuc cac ban hoc tot!");
   getch();  
}
