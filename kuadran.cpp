#include <stdio.h>
int main()
{
	int x,y;
	printf("Masukan titik koordinat x : ");
	scanf("%d",&x);
	printf("Masukan titik koordinat y : ");
	scanf("%d",&y);
	if(x>0)
	{
		if(y>0)
		{
			printf("Titik tumpu koordinat x dan y berada pada kuadran I");
		}else{
			printf("Titik tumpu koordinat x dan y berada pada kuadran IV");
		}
	}else{
		if(y>0)
		{
			printf("Titik tumpu koordinat x dan y berada pada kuadran II");
		}else{
			printf("Titik tumpu koordinat x dan y berada pada kuadran III");
		}
	}
}
