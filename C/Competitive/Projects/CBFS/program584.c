#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>                          

int main()
{
       int fd  = 0 ;
       int iRet =0 ;

       char Data[100]  = {'\0'};
       
       fd = open("Marvellous.txt" , O_RDONLY     );

       if(fd == -1)
       {
              printf("Unable to open  the file \n");
       }
       else
       {
              printf("File get successfully  open with fd  : %d \n", fd);

              iRet = read(fd , Data ,13);

              printf("%d bytes get successfully read \n" , iRet);

              printf("Data from file is : %s :\n",Data);
              

              //// issue = solved due to memset
              
              

              memset(Data , '\0' , 100);

              iRet = read(fd , Data ,3);

              printf("%d bytes get successfully read \n" , iRet);

              printf("DataX from file is : %s \n",Data);

              close(fd);
       }

       return 0 ;
}