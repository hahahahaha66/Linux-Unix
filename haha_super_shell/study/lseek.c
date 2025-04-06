#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    int fd=open("test.txt",O_WRONLY);
    int x1=lseek(fd,0,SEEK_SET);
    printf("%d\n",x1);
    int x2=lseek(fd,100,SEEK_SET);
    printf("%d\n",x2);
    int x3=lseek(fd,-10,SEEK_CUR);
    printf("%d\n",x3);
    close(fd);
    return 0;
}