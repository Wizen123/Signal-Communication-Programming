#include<signal.h>
#include<unistd.h>

void myfunc(int a)
{
    printf("Process B received SIGINT\n");
}

void main()
{
    signal(SIGINT,myfunc);

    pause();
}
