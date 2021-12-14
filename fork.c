#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
 {
    pid_t id;
    printf("Before fork\n");
    id=fork();
    
     if(id==0)
     {
       printf("child1:PPID %d\n",getpid());
       printf("child1:PPID %d\n",getppid());
       printf("child2:PPID %d\n",getpid());
       printf("child2:PPID %d\n",getppid());
     }
       else
       {
          printf("parent:PID %d\n",getpid());
          printf("parent:PPID %d\n",getppid());
          printf("found\n");
        }
          return 0;
    
 }
