#include<stdio.h>
void printClue(int );
int findSum(int ,int[] );

int main()
{
    // here n is the size of  array
    // a[] is an array 
    // use a function to find the sum of prime numbers present in the array

    int n;
    scanf("%d",&n);
    int a[n];
    // write code to get input for array



    
    int sum =findSum(n,a);
    printClue(sum);
    return 0;
}
int findSum(int n, int array1[])
{
    int sum=0;
    // write a code here to find the sum of prime numbers
    

    return sum;
}


void printClue(int x)
{
        printf("%d",x);
}