// Type 3

import java.util.Scanner;

class NumberX
{
    public  boolean Summation(int iNo)
    {
        int iCnt = 0;
        int iSum = 0  ;
        for ( iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
        {
            if(iNo%iCnt ==0)
            {
                iSum = iSum + iCnt;
            }

        }
        if(iSum==iNo){
            return true;
        }
        else {
            return false;
        }
    }
}

class program50

{

       
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean iRet  = false ;
 

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();
    
           
        NumberX nobj = new NumberX();
       iRet =  nobj.Summation(iValue);     

       if(iRet==true)
       {
        System.out.println("Number is perfect");
       }
       else
       {
         System.out.println("Number is  not perfect");
       }


    }
}


// Time Complexity --- O(N/2)
// where N>0 ;