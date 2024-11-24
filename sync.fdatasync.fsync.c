#include<unistd.h>
int fsync(int fd);
//强制将文件缓冲区的与磁盘相交互
int fdatasync(int fildes);
//减少一定磁盘操作 仅刷新文件内容
void sync();
//作用于全局