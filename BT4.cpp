#include<stdio.h>
#include<math.h>
int main(){
  int n;
  long S;
  S = 0;
  printf("Nhap n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i++)
    {
        S = S + i;
    }
  printf("\nTong là %ld: ",S);
}
