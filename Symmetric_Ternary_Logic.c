int tNOT(int x)//�Գ������Ʒ���
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
int tAND(int x, int y)//�Գ�����������
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
int tOR(int x, int y)//�Գ������ƻ���
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
int tNAND(int x, int y)//�Գ������������
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
