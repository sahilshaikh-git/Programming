#include<stdio.h>
#include<fcntl.h>

int main()
{
       int fd  = 0 ;
       
       fd = creat("Marvellous.txt" , 0777);

       if(fd == -1)
       {
              printf("Unable to create the file \n");
       }
       else
       {
              printf("File get successfully created with fd  : %d", fd);
       }

       return 0 ;
}