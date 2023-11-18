#include <stdio.h> 

int main(){

  printf("/n new job AI");
  printf("-------------");
  float p; 
  float threshold=1.5;
  float input;

  //better salary 
  printf("/n does the job have a better salary? (0:false, 1:true)");
  scanf("%f",&input);
    
  float x1=input;
  float w1=0.8;
  
  printf("/n does the job have a better travel time? (0:false, 1:true)");
  scanf("%f",&input);
  float x2=input;
  float w2=0.4;

  printf("/n is the job interesting? (0:false, 1:true)");
  scanf("%f",&input);
  float x3=input;
  float w3=0.6;

  printf("/n does the job have a better prospect? (0:false, 1:true)");
  scanf("%f",&input);
  float x4=input;
  float w4=0.7;

  printf("/n are you unhappy at your current job? (0:false, 1:true)");
  scanf("%f",&input);
  float x5=input;
  float w5=0.8;

  p=(x1*w1)+(x2*w2)+(x3*w3)+(x4*w4)+(x5*w5);

  if(p>threshold){
    printf("/n yes: you should apply for a job");
  }
  else { 
 printf ("/n no: you should not apply for a job"); 
  } 
  return 0;
}
