#include<unistd.h>
#include<stdlib.h>
//获得目标路径
ssize_t readlink(const char *restrict path, char *restrict buf, size_t len);
//获得绝对路径
char* realpath(const char *restrict name, char *restrict resolved);