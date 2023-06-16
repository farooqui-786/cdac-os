#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t id;
    printf("....before fork\n");
    printf("PID: %d\n",getpid());
    printf("PPID: %d\n",getppid());
    printf("....after fork\n");
    //id=fork();
    //id=fork();
    id=fork();
    if(0==id)
    {
        sleep(3);
        printf("CHILD:PID:%d PPID:%d\n",getpid(),getppid());
    }
    else
    {
        printf("PARENT:PID:%d PPID:%d\n",getpid(),getppid());
    }
    return 0;
}