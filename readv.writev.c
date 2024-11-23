#include<sys/uio.h>
//可以一次在多个缓冲区读取和写入
ssize_t readv(int fd, const struct iovec *iovec, int count);
ssize_t writev(int fd, const struct iovec *iovec, int count);