#include<stdio.h>
#include<math.h>
int main(){
  int n;
  float S;
  S = 0;
  printf("Nhap n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i++)
    {
        S = S + 1.0/i;
    }
  printf("\nTong là %f: ",S);
}
