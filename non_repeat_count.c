#include <stdio.h>
int main(){
  int arr[4];
  int count = 0,i,j;

  for(i = 0; i < 4; i++){
    int unique = 1;
    for(j = 0; j < 4; j++){
      if(i != j && arr[i] == arr[j]){
        unique = 0;
        break;
      }
    }
    if(unique){
      count++;
    }
  }

  printf("The count of non-repeated digits is %d", count);

  return 0;
}
