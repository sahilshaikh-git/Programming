#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>                          


#define BUFFER_SIZE 1024 

void DisplayFile( char FIleName[])
{
        char BUFFER [BUFFER_SIZE] = {'\0'};

        int fd = 0 , iRet = 0 ;

       fd =  open( FIleName , O_RDONLY);


       if ( fd == -1 )
       {
              printf("Unable to open the file ");
              return  ;
       } 

       while((iRet = read(fd ,BUFFER, sizeof(BUFFER)) )!=0)
       {
              write( 1 , BUFFER , iRet);
              memset(BUFFER , '\0', sizeof(BUFFER));

       }
        
       close(fd);
}

int main()
{
      

       char Fname[30] = {'\0'};

       printf("Enter the file name : \n");
       scanf("%[^'\n]s", Fname);

       DisplayFile(Fname);

       return 0;
}
