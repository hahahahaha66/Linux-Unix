#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
int main(){
    int fd=open("test.txt",O_RDWR);
    if(fd==-1){
        errno;
       return -1;
    }
    close(fd);
    int fd2=open("test.txt",O_RDWR|O_CREAT|O_TRUNC);
    if(fd2==-1){
        return -1;
    }
    close(fd2);
    return 0;
}