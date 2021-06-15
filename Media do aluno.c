#include <stdio.h>
#include <stdlib.h>

int main(){
float n1, n2, n3, me, ma, a, b, c, d, e;
n1 = n2 = n3 = me = 0;
printf("====== media escolar 1.0========\n\n");
printf("digite a sua 1 nota ");
scanf("%f", &n1);
printf("digite a sua 2 nota");
scanf("%f", &n2);
printf("digite a sua 3 nota");
scanf("%f", &n3);
printf("digite a sua nota dos exercicios");
scanf("%f", &me);

ma = (n1+n2*2+n3*3+me)/7;

if(ma >= 9){
    printf(" o resultado eh a ", a);

}
  else if(ma >= 7.5 && ma < 9){
    printf(" o resultado eh b ", b);

  }
  else if(ma >= 6 && ma < 7.5){
    printf(" o resultado eh c ", c);

  }
  else if(ma >= 4 && ma < 6){
    printf(" o resultado eh d ", d);

  }
 else if (ma < 4){
    printf(" o resultado eh e ", e);

 }
}










