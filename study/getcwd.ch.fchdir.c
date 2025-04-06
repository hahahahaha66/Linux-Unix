#include<unistd.h>
//获取当前目录
char*getcwd(char *buf, size_t size);
//改变当前目录
int chdir(const char *path);
int fchdir(int fd);