class Loops
{
    public static void main(String arg[])
    {
        int Arr[] = {10,20,30,40};
        int iCnt = 0;

        System.out.println("Traversal of Array using for loop : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)     // Prototype of for Loop is same in C, C++, Java.
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println("Traversal of Array using while loop : ");
        iCnt = 0;
        while(iCnt < Arr.length)     // Prototype of while Loop is same in C, C++, Java.
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }

        System.out.println("Traversal of Array using do while loop : ");
        iCnt = 0;
        do     // Prototype of do while Loop is same in C, C++, Java.
        {
            System.out.println(Arr[iCnt]);
            iCnt++;
        }while(iCnt < Arr.length);

        System.out.println("Traversal of Array using for-each loop : ");
        for(int iNo : Arr)     // Only Applicable in Java
        {
            System.out.println(iNo);
        }
    }
}
