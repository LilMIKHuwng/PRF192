#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[10];
	printf("chuoi :");
	scanf("%s",s);
	int k=strlen(s); 
	int dem=0; int i=0;
	while (i<k){
		if (isdigit(s[i])) {
			for (int j=i;j<k;j++) s[j]=s[j+1];
			k-=1;
		} else i++;
	}
	for (i=0;i<k;i++) dem++;
	printf("%d\n",dem);
	printf("%s",s);
	return 0;
}
