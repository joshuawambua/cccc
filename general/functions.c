#include <stdio.h>

int add(int a,int b);
void sayHi();
int main(int argc, char** argv)
{
	
	sayHi();
		
	
	
	add(3,4);
	
	
	return 0;
}

///return type

void sayHi(){
	
	printf("Hi\n");
	
}

//parameters and arguments
int add(a,b){
	
	int sum=a+b;
	printf("%d",sum);
	return 0;
}
