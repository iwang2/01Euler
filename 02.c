#include <stdio.h>
#include <stdlib.h>

int p1(int num, int total){
  if(num >= 1000){
    return total;
  }
  else if(num%3 == 0 || num%5 == 0){
    return p1(num+1, total + num);
 }else{
    return p1(num+1, total);
  }
}

int p2(int num1, int num2, int total){
  if(num2 > 4000000){
    return total;
  }else if(num2%2 == 0){
    return p2(num2, num1 + num2, total + num2);
  }else{
    return p2(num2, num1 + num2, total);
  }
}

int main(){
  //for problem 1
  printf("The sum of all multiples of 3 and 5 less than 1000 is %d.\n", p1(0, 0));
  printf("The sum of the even-valued terms under 4 million in the Fibonacci sequence is %d.\n", p2(1,2,0));
}
