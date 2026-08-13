#include <stdio.h>
#include <unistd.h> 
#include <sys/wait.h> 
int main()
{
pid_t pid;
pid = fork();
Create a child process
if(pid < 0)
{
printf("Process creation failed\n");
return 1;
}