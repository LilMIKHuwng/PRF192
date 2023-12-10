#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char S[50];
	printf("nhap chuoi S: ");
	gets(S);
	strlwr(S);
	
	int i=0; int k=strlen(S);
	while (i<k){
		if (i==0 && isspace(S[i])) {
			for (int j=0;j<k;j++) S[j]=S[j+1];
			k-=1;
		}
		else i++;
		}
		
	int j=k-1;
	while (j>0){
		if (j==k-1 && isspace(S[j])) {
			S[j-1]='\0';
			k-=1;
		}
		else j--;
	}
	
	i=0;
	while (i<k){
		if (isspace(S[i]) && isspace(S[i+1])) {
			for (j=i;j<k;j++) S[j]=S[j+1];
			k-=1;
		}
		else i++;	
	}
	
	for (int i=0;i<strlen(S);i++){
		if (i==0||isspace(S[i-1])) S[i]=toupper(S[i]);
		}
	
	printf("%s",S);
	return 0;
}
