//--------------------------------------------------------
// FUNCTION total
//--------------------------------------------------------
int total(int* data, int size)
{
    int t = 0;

    for(int i = 0; i < size; i++)
    {
        t+= data[i];
    }

    return t;
}
