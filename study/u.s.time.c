#include<utime.h>
#include<sys/stat.h>
#include<sys/time.h>
//文件时间戳 通常为1970年到经历的秒数 可以使用localtime来转化为当地时间
//更改文件时间戳
int utime(const char *file, const struct utimbuf *file_times);
int utimes(const char *file, const struct timeval *tvp);//比utime更精准
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