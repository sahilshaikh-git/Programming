// write the program to find out the character check whether division of schedule 


#include<stdio.h>


#define TRUE 1 
#define FALSE 0 

 
void  ChkTime (char ch )
{

       if ( ch  >=65 && ch <= 68  )
       {
              switch (ch)
              {
              case 65:
                     
                     printf( "Your Exam at 7 Am");
                     break;
              
              case 66:
                     printf("Your Exam at 8:30 AM");
                     break;

              case 67:
                     printf("Your Exam at 9:20 AM");
                     break;

              case 68:
                     printf("Your Exam at 10:30 AM");
                     break;

                    
              default:
              printf("Your written wrong value");
                     break;
              }
       }
       else
       {
              printf("your input is wrong");
       }
      
       

}
int main()
{
       char  cValue  =     '\0' ;
    
       printf("Enter the Character ") ;
       scanf("%c" , &cValue);

       ChkTime(cValue);

       

        return 0 ;
}