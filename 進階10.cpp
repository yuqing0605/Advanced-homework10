#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){

    int i,num,len=0;
    
    while(scanf("%d",&num)!=EOF){
	for(i=2;i<num;i++){
    while(num%i==0) 
    {
    num/=i;
    len++;
	}
    if(len!=0){ 
    
    if(num==1)
    printf("%d^%d\n",i,len);
    
    else if(len==1)
    printf("%d * ",i);
    
    else
    printf("%d^%d * ",i,len);
    len=0;}}
    
    if(num==1);
    
    else
    printf("%d\n",i);
    }
	return 0;
}
