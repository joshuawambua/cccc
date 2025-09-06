

#include <stdio.h>
#include <stdlib.h>
/*Variables and Datatypes*/
//variables are value holders
//int=>short,long
//double
//char
//float
//char[]=string



int main(int argc, char** argv)
{
	int age=35;
	char name[]="Joshua";

printf("There was once a man named %s.\n",name);

printf("He was %d years old.\n",age);

printf("He really liked the name %s.\n",name);

printf("But he did not like the %d\n",age);
	return 0;
}