#include <stdio.h>
#include <sys/stat.h>
int main(){
chmod("sample.txt",0777);
printf("permissions changed successfull.\n");
return 0;