#include<iostream>
using namespace std;

class Array
{
    public:
        int iSize;
        int * Arr;

        Array(int iLength)
        {
            iSize = iLength;
            Arr = new int[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the values\n";
            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }            
        }
        void Display()
        {
            cout<<"Elements of array are : \n";
            int i = 0;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        int Summation()
        {
            int iSum = 0, i = 0;
            for(i = 0; i < iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};

int main()
{
    Array obj1(4);
    int iRet = 0;

    obj1.Accept();
    obj1.Display();

    iRet = obj1.Summation();

    cout<<"Summation of all elements : "<<iRet<<"\n";

    return 0;
}
