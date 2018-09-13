#include <stdio.h>


int multiplesOf3And5(){
  int ans = 0;
  for (int i = 0; i < 1000; i++){
    if (i % 5 == 0 || i % 3 == 0){
      ans += i;
    }
  }
  return ans;
}


int isDivisible20(int num){
    for (int i = 20; i >0; i--){
        if (num%i != 0){
            return -1;
        }
    }
    return 1;
}

int smallestMultiple(){
    int num = 20;
    while (isDivisible20(num) == -1){
        num += 20;
    }
    return num;
}


int main()
{
    printf("%d\n", multiplesOf3And5());
    printf("%d\n", smallestMultiple());

    return 0;
}
