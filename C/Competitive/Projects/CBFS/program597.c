#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>                          


#define BUFFER_SIZE 1024 
int main()
{
       char BUFFER [BUFFER_SIZE] = {'\0'};

       char Fname[30] = {'\0'};


       int fd = 0 , iRet = 0 ;

       printf("Enter the file name : \n");
       scanf("%[^'\n]s", Fname);

       fd =  open( Fname , O_RDONLY);


       if ( fd == -1 )
       {
              printf("Unable to open the file ");
              return -1 ;
       } 

       while((iRet = read(fd ,BUFFER, sizeof(BUFFER)) )!=0)
       {
              write( 1 , BUFFER , iRet);
              memset(BUFFER , '\0', sizeof(BUFFER));

       }
        
                     close(fd);
       return 0;
}
