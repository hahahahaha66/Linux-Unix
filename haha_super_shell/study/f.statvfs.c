#include<sys/statvfs.h>
//获得文件系统的相关信息
//字符串
int statvfs(const char *restrict file, struct statvfs *restrict buf);
//文件描述符
int fstatvfs(int fildes, struct statvfs *buf);
