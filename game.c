#include <graphics.h>
#include <time.h>
#include <stdlib.h>
void intitialisation()
{ 
    int gd = DETECT, gm;    
    initgraph(&gd, &gm, "");
}
char affichage1(char A[4][4])
{
    int i,j,k;
    int a,b;
	char c;
    char t[2];
    char v[2];
    char S[5];
    srand(time(NULL));
    
    for(i=0;i<300;i+=75)
    {   
    	for(j=0;j<300;j+=75)
    	{
    		rectangle(75+j,75+i,150+j,150+i);
    	}
    }
    outtextxy(50,112,"1");
    outtextxy(50,187,"2");
    outtextxy(50,262,"3");
    outtextxy(50,337,"4");
    outtextxy(112,50,"1");
    outtextxy(187,50,"2");
    outtextxy(262,50,"3");
    outtextxy(337,50,"4");
    for(i=0;i<4;i++)
    {
    	S[i]=A[i][0];
    	for(j=0;j<4;j++)
    	{   
    		t[0]=A[i][j];
    		t[1]='\0';
    		outtextxy(112+j*75,112+i*75,t);

    	}
    }
    delay(5000);
    cleardevice();
    for(i=0;i<300;i+=75)
    {   
    	for(j=0;j<300;j+=75)
    	{
    		rectangle(152+j,125+i,227+j,200+i);
    	}
    }
    //////////////////////////////
    outtextxy(100+30,162,"1");
    outtextxy(100+30,187+50,"2");
    outtextxy(100+30,262+50,"3");
    outtextxy(100+30,337+50,"4");
    ////////////// up ////////////
    outtextxy(112+65,100,"1");
    outtextxy(187+65,100,"2");
    outtextxy(262+65,100,"3");
    outtextxy(397,100,"4");
    /////////////////////////////
    outtextxy(435,100,"CAN YOU REAMEMBER???");
    k=0;
    while(k<=16)
    {
    	printf("colone=");
    	scanf("%d",&j);
    	printf("line=");
    	scanf("%d",&i);
    	printf("char %d %d=",i,j);
    	scanf("%c",&c);
    	i--;
    	j--;
    	if(A[i][j]==c)
    	{
    		k++;
    		printf("true\n");
    		t[0]=c;
    		t[1]='\0';
    		outtextxy(177+j*75,150+i*75,t);
    	}
    	else
    		printf("false\n"); 
    }
    getch();
    closegraph();
}
void affichage2(char B[4][4])
{  
   int i,j;
   char t[2];
   for(i=0;i<4;i++)
   {
   	for(j=0;j<4;j++)
   	{  
   		t[0]=B[i][j];
    	t[1]='\0';
       outtextxy(112+j*75,112+i*75,t);
   	}


   }
}
int main()
{    
	int i,j;
    char A[4][4];
    char t[4][4];
    char B[4][4];
	intitialisation(); 
	for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{
            A[i][j]=(char)(rand() % 25 + 65);
    	}
    }
	affichage1(A);
	return 0;
}