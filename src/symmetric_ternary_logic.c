//对称三进制非门
int tNOT(int x)
{
    if (x == 1){
        return -1;
    }
    if (x == 0){
        return 0;
    }
    if (x == -1){
        return 1;
    }
    return 0;
}

//对称三进制与门
int tAND(int x, int y)
{
    if ((x == y) & (x != 0) & (y != 0)){
        return 1;
    }
    if ((x == 0) | (y == 0)){
        return 0;
    }
    if ((x != y) & (x != 0) & (y != 0)){
        return -1;
    }
    return 0;
}

//对称三进制或门
int tOR(int x, int y)
{
    if (x + y == 0)
    {
        return 0;
    }
    if (((x == -1) & (y != 1)) | ((y == -1) & (x != 1)))
    {
        return -1;
    }
    if (((x == 1) & (y != -1)) | ((y == 1) & (x != -1)))
    {
        return 1;
    }
    return 0;
}

//对称三进制与非门
int tNAND(int x, int y)
{
    if ((x == 1) & (y == 1))
    {
        return -1;
    }
    if ((x == 0) | (y == 0))
    {
        return 0;
    }
    return 0;
}
