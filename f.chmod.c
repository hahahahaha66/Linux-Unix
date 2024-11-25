#include<sys/stat.h>
//修改文件权限
int chmod(const char *file, __mode_t mode);
int fchmod(int fd, __mode_t mode);