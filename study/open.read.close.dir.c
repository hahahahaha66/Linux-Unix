#include<dirent.h>
//打开目录
DIR*opendir(const char *name);
DIR*fdopendir(int fd);
//获取目录文件的inode和名字，顺序读取，结尾返回空指针
struct dirent* readdir(DIR *dirp);
//目录指针返回到开始
void rewinddir(DIR *dirp);
//关闭目录
int closedir(DIR *dirp);
//由于目录也是文件，当打开时也会有对应的文件描述符
int dirfd(DIR *dirp);