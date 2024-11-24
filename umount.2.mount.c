#include<sys/mount.h>
//挂载文件系统
int mount(const char *special_file, const char *dir, const char *fstype, unsigned long rwflag, const void *data);
//卸载文件系统
int umount(const char *special_file);
int umount2(const char *special_file, int flags);