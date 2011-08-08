/*
 * Copyright (c) 2011 Diego Rodrigo Hachmann
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "util.h"

int handle_error_file_open(char *path){
	if(IDIOM==ENGLISH)
		printf("Error: Can't Open %s\n", path);
	else if(IDIOM==PORTUGUESE)
		printf("Error: foi possível abrir %s\n", path);
	printf("%s\n\n",(char*)strerror(errno));
	exit(-1);
}

int handle_error_bad_file(char *path){
	if(IDIOM==ENGLISH)
		printf("Error: Bad File %s\n", path);
	else if(IDIOM==PORTUGUESE)
		printf("Erro: Arquivo incorreto : %s \n", path);
	printf("%s\n\n",(char*)strerror(errno));
	puts("");
	exit(-1);
}

void msg_error(char *msg){
	printf("Error: %s\n", msg);
	puts("");
}
