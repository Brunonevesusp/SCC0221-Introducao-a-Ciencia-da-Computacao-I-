#include <stdio.h>
 
int main(){
  int i,d1,d2;
 
  for(i = 1000; i <= 9999; i += 1){
    d1 = i%100;
    d2 = i/100;
    if( (d1+d2)*(d1+d2) == i )
      printf("%d\n",i);
  }
  return 0;
}