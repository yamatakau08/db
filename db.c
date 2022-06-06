/* dB = 20 log x */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *program;

int main(int argc,
     char *argv[])
{
    double db;
    double x;
    char *ptr;

    if (ptr = strrchr(argv[0],'/')) {
	program = ++ptr;
    } else {
	program = argv[0];
    }
    
    if (argc != 2) {
	fprintf(stderr,"Usage: %s dB\n",program);
	exit(-1);
    }

    db = atof(argv[1]);

    x = pow(10,(db / 20));

//    printf("%s dB = %.8f\n",argv[1],x);
    printf("%f dB = %.8f\n",db,x);    
}
