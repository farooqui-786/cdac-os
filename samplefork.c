#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t id;
    id=fork();
    id=fork();
    //id=fork();
 if(id==-1)
 {
    printf("\nError");
 }
 else if(id==0)
 {
    printf("\nChild process");
    printf("\nPID=%d & PPID=%d",getpid(),getppid());
 }
 else
 {
    printf("\nParent process");
    printf("\nPID=%d & PPID=%d",getpid(),getppid());
 }
   printf("PARENT:PID:%d PPID:%d\n",getpid(),getppid());
    printf("CHILD:PID:%d PPID:%d\n",getpid(),getppid());
   return 0;
}