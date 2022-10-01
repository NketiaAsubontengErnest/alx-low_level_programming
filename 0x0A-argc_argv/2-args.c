#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: vector of strings of arguments
 *
 * Return: Always 0 (Success)
 *
 */
 int main(int argc, char *argv[])
 {
	 int count = 0;

	 if(argc > 0){
		 while (count < argc) {
		 	/* code */
			print("%s\n", argv[count]);
		 }
	 }
 }
