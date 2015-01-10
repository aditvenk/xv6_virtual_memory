// Do not modify this file. It will be replaced by the grading scripts
// when checking your project.

#include "types.h"
#include "stat.h"
#include "user.h"
int
main(int argc, char *argv[])
{
  int pid = fork();
  if (pid < 0) {
    printf(1, "fork failed\n");
    exit();
  }
  if (pid == 0) {
    argv[0] = argv[1];
    argv[1] = argv[2];
    argv[2] = NULL;
    new_exec(argv[0], 1, argv);
  }
  else {
    printf(1, "parent about to wait \n");
    wait();
  }
  exit();
}
