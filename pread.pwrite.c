#include<unistd.h>
//结合lseek,直接在指定位置进行调用
ssize_t pread(int fd, void *buf, size_t nbytes, __off_t offset);
ssize_t pwrite(int fd, const void *buf, size_t n, __off_t offset);