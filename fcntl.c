#include<fcntl.h>
#include<stdio.h>
int main(){
    int fd=open("test.txt",O_RDONLY);
    int flags=fcntl(fd,F_GETFL);
    printf("%d\n%d",fd,flags);
    return 0;
}