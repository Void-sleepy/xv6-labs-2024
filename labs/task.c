#include "kernel/types.h"
#include "user/user.h"
//example 5

int main(){

  int pid;
  pid = fork();
  
  printf("fork() returned %d \n", pid);
  if(pid == 0){ 
    printf("child\n");
  } else { 
    printf("parent\n");   
  }
  
  exit(0);
}
