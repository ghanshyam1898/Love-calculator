#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>

#define SIZE 1
#define NUMELEM 5




int main()
{
char girl[40], boy[40];
int i,love;
double time_used;

using namespace std;

FILE* fd = NULL;
char buff[100];
memset(buff,0,sizeof(buff));
fd = fopen("love_letter","a");
if(NULL == fd)
	{
        printf("\n fopen() Error!!!\n");
        return 1;
	}


printf("\n\n\n\t\t\t\t\t\t\tWelcome to LOVE CALCULATOR\n\n\n");
printf("Enter girl's name : ");
scanf("%s", girl);

printf("\nEnter boy's name : ");
scanf("%s", boy);



fwrite("\nGirl : ",SIZE,8,fd);
fwrite(girl,SIZE,strlen(girl),fd);
fwrite("\nBoy : ",SIZE,6,fd);
fwrite(boy,SIZE,strlen(boy),fd);
fwrite("\n\n",SIZE,2,fd);


if (strlen(girl) + strlen(boy) < 10)
	love = (strlen(girl)*9 + strlen(boy) *11) + 20;

else
	love = (strlen(girl)*8 + strlen(boy) *7);

if (1)
	while(love > 100)
		love = love - strlen(boy);



if (love > 90)
	printf("\nWoah!! Made for each other ;-)");
if (love <= 90 && love >= 80)
	printf("\nRelationships as yours' are rare these days :-)");
if (love < 80)
	printf("\nIt's kind of Khatta Meetha :-@");
printf("\n\nLove percentage is : %d % \n\n\n", love);

return 0;
}
