#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>                          


#define BUFFER_SIZE 1024 

void fileCopy( char FIleNameSrc [] , char FileNameDest[])
   
{
        char BUFFER [BUFFER_SIZE] = {'\0'};

        int fdsrc = 0 , fdDest  = 0 ;
        int iRet =0; 

       fdsrc =  open( FIleNameSrc , O_RDONLY);


       if ( fdsrc == -1 )
       {
              printf("Unable to open source file ");
              return  ;
       } 

       fdDest = creat(FileNameDest ,0777) ;

       
       if ( fdDest == -1 )
       {
              printf("Unable to open destination file ");
              return  ;
       } 

       while((iRet = read(fdsrc ,BUFFER, sizeof(BUFFER)) )!=0)
       {

              write(fdDest, BUFFER , iRet);
              memset(BUFFER ,'\0' , sizeof(BUFFER));
       }
        
        close(fdsrc);
        close(fdDest);

       
}

int main()
{
      

       char FnameSrc[30] = {'\0'};
       char FnameDest[30] = {'\0'};

       

       printf("Enter the source file  name : \n");
       scanf("%[^'\n]s", FnameSrc);

       printf("Enter the source Destination name : \n");
       scanf(" %[^'\n]s", FnameDest);                           // issue


       fileCopy (FnameSrc , FnameDest);


       return 0;
}
