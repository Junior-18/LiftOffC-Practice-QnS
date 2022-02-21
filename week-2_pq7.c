//LOOPS
/*7. HCF of two input numbers */

#include<stdio.h>

int main(){
  int num1, num2, hcf=0;
  printf("Enter the two numbers :\n");
  scanf("%d %d", &num1, &num2);
  if(num1>num2){
   for(int i=0; i<=num2; i++){
      if(num1%i==0 && num2%i==0){
          hcf=i;
      }
    }
    printf("The HCF is %d", hcf);
  }
  else if(num2>num1){
   for(int i=0; i<=num1; i++){
      if(num1%i==0 && num2%i==0){
         hcf=i;
      }
    }
    printf("The HCF is %d", hcf);
  }
  return 0;
}
  
