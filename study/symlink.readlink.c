#include<unistd.h>
//创建和使用符号链接
int symlink(const char *from, const char *to);
ssize_t readlink(const char *restrict path, char *restrict buf, size_t len);