#include<stdio.h>
#include<fcntl.h>

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
       }

       return 0 ;
}