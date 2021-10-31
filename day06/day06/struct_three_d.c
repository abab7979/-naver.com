#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct ±¸Á¶Ã¼ ¹è¿­·Î ¸¸µé±â
struct Three_D{
	//3Â÷¿ø ÁÂÇ¥
	int x,y,z; 
};


int main() {
	struct Three_D d3;
	struct Three_D d4;
	d3.x = 100;
	d3.y = 200;
	d3.z = 300;
	//±¸Á¶Ã¼ °´Ã¼ º¹»ç
	d4 = d3;         //d3À» d4¿¡ ÀúÀå
	printf("xÁÂÇ¥ : %d,  xÁÂÇ¥ : %d,  xÁÂÇ¥ : %d\n", d3.x, d3.y, d3.z);
	printf("xÁÂÇ¥ : %d,  xÁÂÇ¥ : %d,  xÁÂÇ¥ : %d\n", d4.x, d4.y, d4.z);
		
	return 0;

}