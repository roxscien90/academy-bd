#include<stdio.h>
#include<stdlib.h>


int main(int argc , char * argv[]){



	char * user;
	if(user=malloc(sizeof(char)*50))
	  scanf("%s" , user);
	printf("hello %s!!",user);




}
