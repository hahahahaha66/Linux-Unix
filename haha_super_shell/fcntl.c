#include<fcntl.h>
#include<stdio.h>
//根据文件描述符，通过控制参数，获取文件信息
int main(){
    int fd=open("test.txt",O_RDONLY);
    int flags=fcntl(fd,F_GETFL);
    printf("%d\n%d",fd,flags);
    return 0;
}