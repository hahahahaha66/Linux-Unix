#include<unistd.h>
#include<fcntl.h>
int main(){
    int fd=open("test.txt",O_WRONLY);
    char c[10]="0123456789";
    write(fd,c,10);
    close(fd);
    return 0;
}