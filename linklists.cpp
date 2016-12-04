#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int search(char);

struct node{
	
	char a;
	struct node *next;
	
	
};

int main(){
int n;
int v[6]={0,0,0,0,0,0},s;
char *str;
str=(char *)malloc(100);
printf("Enter the string");
gets(str);
n=strlen(str);


struct node *nodes[n];



for(int i=0;i<strlen(str);i++){
	
	nodes[i]=(struct node*)malloc(sizeof(struct node));
}

for(int i=0;i<strlen(str);i++){
	
	nodes[i]->a=str[i];
	nodes[i]->next=nodes[i+1];
}


if(nodes[0]->a=='a')
v[0]++;

if(nodes[0]->a=='e')
v[1]++;

if(nodes[0]->a=='i')
v[2]++;

if(nodes[0]->a=='o')
v[3]++;

if(nodes[0]->a=='u')
v[4]++;


for(int i=0;i<strlen(str);i++){
	


if((nodes[i]->a)==' ')
printf("char:%c\n",nodes[i+1]->a);
s=search(nodes[i+1]->a);
if(s==0)
v[0]++;

if(s==1)
v[1]++;
if(s==2)
v[2]++;
if(s==3)
v[3]++;
if(s==4)
v[4]++;

if(s==5)
v[5]++;
}


for(int i=0;i<5;i++){
	
printf("\n%d:-%d ",i,v[i]);
}



return 0;





}


int search(char a){
	
	switch(a){
		
		case 'a':return 0;
		break;
		case 'e':return 1;
		break;
		case 'i':return 2;
		break;
		case 'o':return 3;
		break;
		case 'u':return 4;
		break;
		
		default:
			return 5;
		
		
		
		
		
	}
	
	
	
	
}







