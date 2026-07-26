#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>                        // Only LINUX based os
#include<string.h>                          


#define BUFFER_SIZE 1024 
#define ERR_OPEN -1 


// change in  parameter

int CountSmall( char *FIleName)
{
        char BUFFER [BUFFER_SIZE] = {'\0'};

        int fd = 0 , iRet = 0 , iCount =0 , i= 0  ;

       fd =  open( FIleName , O_RDONLY);


       if ( fd == -1 )
       {
   
              return ERR_OPEN ;
       } 

       while((iRet = read(fd ,BUFFER, sizeof(BUFFER)) )!=0)
       {
              for ( i =0  ; i < iRet ; i++)
              {
                     if((BUFFER[i]  >= 'a' )|| (BUFFER[i]<= 'z') )
                     {
                            iCount++ ;
                     }
              }
              memset(BUFFER , '\0', sizeof(BUFFER));

       }
        
       return iCount ;
}

int main()
{
      

       char Fname[30] = {'\0'};
       int iRet = 0 ;

       printf("Enter the file name : \n");
       scanf("%[^'\n]s", Fname);

        iRet = CountSmall(Fname);

        if( iRet ==  ERR_OPEN)
        {
              
                    printf("unable to open file ");
        }
        else
        {
                    printf("Number of small character are  : %d",iRet );
        }

  

       return 0;
}
