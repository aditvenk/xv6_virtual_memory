// Do not modify this file. It will be replaced by the grading scripts
// when checking your project.

#include "types.h"
#include "stat.h"
#include "user.h"

#define COUNT 1024 

void foo() {
  int p[COUNT];
  int x;
  x= 1;
  p[1] = 2;
  int q[COUNT];
  int y;
  y = 3;
  q[0] = 4;
  int r[COUNT];
  int z;
  z = 5;
  r[100] = 18;
}
void bar() {
  int p[COUNT];
  int r[COUNT];
  int z;
  z= 2;
  p[1023] = 9;
  r[8] = -1;
}
int
main(int argc, char *argv[])
{
  if (argc >= 2)
  {
    if (atoi(argv[1]) == 2) 
      bar();
    else
      foo();
  }
  else 
    printf(1, "usage: stack_test <option> ; where option = 1 or 2");
  exit();
}
