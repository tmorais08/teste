#include <stdio.h>

int main(void) {
  double n1,n2,n3,media;
  printf("Informe três notas:");
  scanf("%lf%lf%lf",&n1,&n2,&n3);
  media=(n1+n2+n3)/3;
  if(media>=7 && media<=10){
    printf("APROVADO %.2lf",media);
  }
  else{
    printf("REPROVADO %.2lf",media);  
  } 
  return 0;
}