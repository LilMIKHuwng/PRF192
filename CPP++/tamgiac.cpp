#include <stdio.h>
 
int main() {
   int n,i,j,k,q;
 
   n = 6;
 
   printf("Ve tam giac sao vuong can:\n");
   for(i = 0; i < n; i++) {
      for(j=i; j<=n; j++)
         printf("  "); 
 
      for(j=0; j <=i; j++)
         printf(" *");
 
      printf("\n");
       
   }
   while (n > 0)
    {
        for (int i = 1; i<n; i++)
            printf("%c", ' ');
        for (int k = 0; k <= q; k ++)
            printf("%c", '*');
        n -- ;
        q += 2 ;
        printf("\n");
    }
    n=6;
    printf("Ve tam giac sao deu:\n");
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= n-i; j++)
         printf(" ");
 
      for(j = 1; j <= i; j++)
         printf("* ");
 
      printf("\n");
   }
   n = 6;
 
   printf("Ve tam giac sao deu:\n");
   for(i = 1; i <= n; i++) {
      for(j = 1; j < i; j++)
         printf(" "); 
 
      for(j = i; j <= n; j++)
         printf("* ");
 
      printf("\n");
   }
    
   return 0;
}
