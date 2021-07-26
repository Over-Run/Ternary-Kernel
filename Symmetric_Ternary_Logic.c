int tNOT(int x)//对称三进制非门
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
}
int tAND(int x, int y)//对称三进制与门
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
}
int tOR(int x, int y)//对称三进制或门
{
	if (x + y == 0)
	{
		return 0;
	}
	if (((x == -1) & (y != 1)) | ((y == -1) & (x != 1))
	{
		return -1;
	}
	if (((x == 1) & (y != -1)) | ((y == 1) & (x != -1)))
	{
		return 1;
	}
}
int tNAND(int x, int y)//对称三进制与非门
{
	if ((x == 1) & (y == 1))
	{
		return -1;
	}
	if ((x == 0) | (y == 0))
	{
		return 0;
	}
}
