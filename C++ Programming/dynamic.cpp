#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;

    p = new int[5];
    // internally it is considered as :-  p = (int *)malloc(10 * sizeof(int));

    // Use the Memory

    delete []p;   // give the [] if we are deleting array
    // internally it is considered as :-   free(p); 

    return 0;
}
