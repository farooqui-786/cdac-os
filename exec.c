#include<stdio.h>
#include <unistd.h>
int main()
{
    pid_t l1;
    l1=fork();
    if(l1==0)
    execl("/bin/ls",NULL,NULL);
    return 0;
}
