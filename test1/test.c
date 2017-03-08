#include <graphics.h>//TC图形库 
#include <stdio.h>//标准输入输出头文件 
#include <fcntl.h>//open库函数
#include <io.h> //即iostream.h 
#include <stdlib.h> //库函数，提供应用运算、类型转换、程序环境处理等
#include <conio.h>//控制台输入与输出，字符屏幕处理函数 
#define ROW 1//纵坐标放大倍数
#define COL 2
int main( )
{
	int x,y;
	char *s="我";
	FILE *fp;//定义文件指针fp指向文件FILE，访问该文件 
	char buffer[32];//buffer来存储一个汉字 
	register m, n, i, j, k;//寄存器变量（仅适用于整型和字符型变量） 
	unsigned char qh, wh;//无符号的字符类型
	unsigned long offset; //无符号的偏移量 
	int gd = DETECT, gm;//图形屏幕初始化；gd=graphdriver是指向图形驱动序号变量的指针；gm=graphmode是在gd选定后，指向图形驱动序号变量的指针 
	initgraph(&gd,&gm,""); //图形显示器和显示模式的路径的自动检测 
	if((fp=fopen("hzk16","rb"))==NULL) { //打开汉字库，该字库可以在 ucdos中找到
		printf("Can'topenhaz16,Pleaseaddit");//输出语句 
		getch();
		closegraph();
		exit(0);
	} 
	x=20;
	y=100;//汉字显示位置设置 
	while(*s) { //利用死循环
		qh=*(s)-0xa0; //汉字区位码 
		wh=*(s+1)-0xa0; //算出汉字的区位码，一个汉字两个字节，分别用0、a0合成它的区位码
		offset=(94*(qh-1)+(wh-1))*32L;//计算该汉字在字库中偏移量，汉字有94个区对应所在字库的位置，一个汉字点32字节 
		fseek(fp,offset,SEEK_SET);//将fp向前移动
		offset fread(buffer,32,1,fp);//取出汉字32字节的点阵字模存入buffer 中（一个汉字） 
		for(i=0;i<16;i++) //将32位字节的点阵按位在屏 幕上打印出来(1:打印,0:不打印),显示汉字 
			for(n=0;n<ROW;n++)
				for(j=0;j<2;j++)
					for(k=0;k<8;k++)
						for(m=0;m<COL;m++) 
							if(((buffer[i*2+j]>>(7-k))&0x1)!=NULL) 
								putpixel(x+8*j*COL+k*COL+m,y+i*ROW+n,GREEN);//按字节分解，相加 对应的坐标，将对应的0和1进行画点，1画、0不画则显示阳型汉字，反之阴型 s+=2;//因为一个汉字内码占用两个字节,所 以s必须加2
		x+=30;//进行相应的放 大和偏移}
		getch();
		closegraph();
	}


	return 0;
}