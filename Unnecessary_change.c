# define size 10
int array[size] = {3,6,9,12,15,18,21,24,27,30}; 

int insertz(int a, int stop)
{
    int cociente, resto;
    if ( a > 0 && stop > 0 )
    {
        cociente = 0;
        resto = a;

        while ( resto >= stop )
        {
            resto = resto - stop;
            cociente = cociente +1;
        }
    }
    return cociente;
}

int change(int *a,int b)
{
    int stop = b/2;
    int temp = 0;
    int result = 0;
    for(int i=0; i< b ;i++)
    {
        temp = insertz(a[i], stop);
        result = result + temp;
    }
    return result;
};

int main()
{
    int A = change(array,size);
    return A;
};
