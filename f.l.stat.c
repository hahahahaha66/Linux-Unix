#include<sys/stat.h>
#include<stdio.h>
int main(){
    struct stat buf;
    if(stat("test.txt",&buf)!=-1){
        printf("%d",buf.st_dev);
    }
    return 0;
}