#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main(){
    char c[100]={0};
    int fd=open("test.txt",O_RDONLY);
    lseek(fd,0,SEEK_END);
    read(fd,c,100);
    printf("%s",c);
    close(fd);
    return 0;
}