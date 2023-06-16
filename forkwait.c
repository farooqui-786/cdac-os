#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
   int wstatus,s;
   pid_t id1;
   id1=fork();
    if(id1==0)

    {
       pid_t id2;
       id2=fork();
        if(id2==0)
        printf("child of child:PID:%d\t PPID:%d\n",getpid(),getppid());
    else
        printf("child:PID:%d\t PPID:%d\n",getpid(),getppid());
    }
    else
    {
        s=wait(&wstatus);
        printf("wait=%d\n",s);
        pid_t id3;
        id3=fork();
        if(id3==0)
        printf("parent child\n PID:%d\tPPID:%d\n",getpid(),getppid());
        else
        {
            s=wait(&wstatus);
            printf("parent\nPID:%d\t PPID:%d\n",getpid(),getppid());

        }

    }
    
}