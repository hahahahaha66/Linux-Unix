#include<unistd.h>
//以路径字符串作为索引，避免open的打开，直接修改文件的大小
int truncate(const char *file, __off_t length);
//以文件描述符作为索引
int ftruncate(int fd, __off_t length);