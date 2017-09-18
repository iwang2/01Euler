#include <stdio.h>
#include <stdlib.h>

//for problem 1
int check(int num, int total){
  if(num%3 == 0){
    return total + num;
  }else if(num%5 == 0){
    return total + num;
  }else{
    return total;
  }
}

int main(){
  int total;
  for(int i = 3; i < 1000; i++){
    total = check(i, total);
  }
  printf("%d\n", total);
}
