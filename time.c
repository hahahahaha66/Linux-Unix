#include<utime.h>
#include<sys/stat.h>
#include<sys/time.h>
int main(){
    struct stat buf;
    struct utimbuf utb;
    stat("test.txt",&buf);
    utb.actime=buf.st_atime;
    utb.modtime=buf.st_mtime;
    utime("test.txt",&utb);
    utimes("test.txt",&utb);
    return 0;
}