#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int F0=0, F1=1, F2=1;
	for(int i=3;i<=n;i++){
		F0=F1;
		F1=F2;
		F2=F0+F1;
	}
	printf("So o vi tri thu %d la: %d",n,F2);
}
