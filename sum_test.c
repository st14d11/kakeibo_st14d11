#include <stdio.h>
#include "sum.h"

int main(void) {
   int payments[5] = {1, 1, 2, 3, 3};
   if( sum(payments) == 10) {
     printf("テスト成功\n");
   } else {
     printf("テスト失敗\n");
   }
   return 0;
}
