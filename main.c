#include <stdio.h>

float score;
int grade;
int main(){
  scanf("%f",&score);
  grade = (int)score;

if(0<= grade && grade<=100){
  switch(grade/10){
    case 10 : 
    case  9 : 
    case  8 : printf("A"); break;
    case  7 : if(75<= grade && grade<=79) printf("B+");
              if(70<= grade && grade<=74) printf("B"); break;
    case  6 : if(65<= grade && grade<=69) printf("C+");
              if(60<= grade && grade<=64) printf("C"); break;
    case  5 : if(55<= grade && grade<=59) printf("D+");
              if(50<= grade && grade<=54) printf("D"); break;
    default : printf("F"); break;
    }
}else{
    printf("Enter Only 0-100");
  }
}