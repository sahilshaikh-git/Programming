#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>            
#include<sys/stat.h>



#define BUFFER_SIZE 1024 




int CalculateFileSize( char FIleName [])
{
       struct stat sobj ;

       stat(FIleName , &sobj);

       return sobj.st_size ;
       
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
