#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os

int main()
{
       int fd  = 0 ;
       
       fd = open("Marvellous.txt" , O_RDONLY);

       if(fd == -1)
       {
              printf("Unable to open  the file \n");
       }
       else
       {
              printf("File get successfully  open with fd  : %d", fd);

              close(fd);
       }

       return 0 ;
}