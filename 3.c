#include<stdio.h>

int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	int csc=n%10; printf(" chu so cuoi la %d",csc);
	int csdau;
	while(n){
		csdau=n%10;
		n/=10;
	} 
	printf("\n chu so dau la %d",csdau);
}