#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("Nhap 3 so: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if (a>b){
		if(a>c){
			printf("Max l� %d",a);
		}else{
			printf("Max l� %d",c);
		}
	}else{
		if (b>c){
			printf("Max l� %d,b");
		}else{
			printf("Max l� %d",c);
		}
	}
	
}
