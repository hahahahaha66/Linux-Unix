#define _XOPEN_SOURCE 500
#include<ftw.h>
//遍历文件树，函数在每个文件调用之前都执行
int nftw(const char *dir, __nftw_func_t func, int descriptors, int flag);