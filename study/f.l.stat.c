#include<sys/stat.h>
#include<stdio.h>
//获取文件信息 存储在结构体stat中
int stat(const char *restrict file, struct stat *restrict buf);
int main(){
    struct stat buf;
    if(stat("test.txt",&buf)!=-1){
        printf("%d",buf.st_dev);
    }
    return 0;
}