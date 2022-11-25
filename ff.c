// Task 2 by Muhammad Mobeen 200901097
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main()
{

int n ,fd ,fd1;

char buff[100];

fd=open("file1.txt", O_RDONLY);

n=read(fd,buff,18);

fd1 = open("target.txt" ,O_CREATE | O_WRONLY, 0642);
write(fd1,buff,18);

}