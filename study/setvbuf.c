#include<stdio.h>
//在进行I/O操作时 系统会先将读取和写入存储到高速缓冲区 以减少对磁盘读取所浪费的时间
int setvbuf(FILE *restrict stream, char *restrict buf, int modes, size_t n);
//mode 有三种模式
//_IONBF 立即输出 
//_IOLBF 遇到换行或缓冲区满时刷新 
//_IOFBF 缓冲区满时或显示调用fflush时刷新