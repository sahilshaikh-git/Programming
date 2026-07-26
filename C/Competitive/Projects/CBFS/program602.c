#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>            
#include<sys/stat.h>



#define BUFFER_SIZE 1024 




void DisplatFileInformation( char FIleName [])
{
       struct stat sobj ;

       stat(FIleName , &sobj);

       printf("File name : %s\n" , FIleName);

       printf("Inode Number : %llu\n" ,  sobj.st_ino  );

      printf("file size  is  %d\n" , sobj.st_size);

       
}


int main()
{
      

       char Fname[30] = {'\0'};

       int iRet = 0 ;

       printf("Enter the file name : \n");
       scanf("%[^'\n]s", Fname);

       DisplatFileInformation(Fname);

 

       return 0;
}
