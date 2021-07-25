int tNOT(int x)
{
	if (x = 1){
		return -1;
	}
	if (x = 0){
		return 0;
	}
	if (x = -1){
		return 1;
	}
}
int tAND(int x, int y)
{
	if (x = y){
		return 1;
	}
	if ((x != y) & (((x = 0) & (y != 0)) | (x != 0) & (y = 0))){
		return 0;
	}
	if ((x != y) & (x != 0) & (y != 0)){
		return -1;
	}
}
int tOR(int x, int y){

}
