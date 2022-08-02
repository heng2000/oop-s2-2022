//aim to calculae the sum of all elements in an int array.
//parameters of the function are the array and the number of elements in the array.
//should return 0 if the size parameter, n, is less than 1.
int array_sum(int array[],int n);
int array_sum(int array[],int n)
{
    int sum =0;
    if(n<1)
    {
        return 0;
    }else{
        for (int i =0;i<n;i++)
        {
            sum +=array[i];
        }
    }
    return sum;
}