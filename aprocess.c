#include<signal.h>
#include<sys/types.h>
#include<stdio.h>

void main(int argc,char *argv[])
{
    pid_t pid;
    
    /*�ַ���ת����*/
    pid=atoi(argv[1]);

    kill(pid,SIGINT);
}
