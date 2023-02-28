#include "src1.h"
#include "src2.h"

#include "stdlib.h"

int main(void)
{
  int a = 0;
  int b = 0;
  while(1){
    a += src1_funcPrototype() + src2_funcPrototype();
    b++;
  }
  return 0;
}