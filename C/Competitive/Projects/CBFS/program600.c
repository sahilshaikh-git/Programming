#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>                          


#define BUFFER_SIZE 1024 




int CalculateFileSize( char FIleName [])

{
        char BUFFER [BUFFER_SIZE] = {'\0'};

        int fd = 0 , iRet = 0 ;
        int iSize = 0 ;

       fd =  open( FIleName , O_RDONLY);


       if ( fd == -1 )
       {
              printf("Unable to open the file ");
              return  -1 ;
       } 

       while((iRet = read(fd ,BUFFER, sizeof(BUFFER)) )!=0)
       {

              iSize = iSize + iRet ;
           

       }
        
        close(fd);

       return iSize  ;
}

int main()
{
      

       char Fname[30] = {'\0'};

       int iRet = 0 ;

       printf("Enter the file name : \n");
       scanf("%[^'\n]s", Fname);

        iRet = CalculateFileSize(Fname);

        printf("Total number of page is : %d   byte\n", iRet);

       return 0;
}
