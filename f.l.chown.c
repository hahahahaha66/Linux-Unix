#include<grp.h>
#include<pwd.h>
#include <unistd.h>
//改变文件属主
int chown(const char *file, __uid_t owner, __gid_t group);
int fchown(int fd, __uid_t owner, __gid_t group);
int lchown(const char *file, __uid_t owner, __gid_t group);