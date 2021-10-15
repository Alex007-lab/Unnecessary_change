# define size 10
int array[size] = {3,6,9,12,15,18,21,24,27,30}; 

int insertz(int a, int stop){
    return a-stop;
}

int change(int *a,int b)
{
    int stop = size/2;
    int result = 0;
    for(int i=0; i< stop ;i++)
    {
        result = insertz(a[i], stop);
    }
    return result;
};

int main()
{
    int A = change(array,size);
    return A;
};