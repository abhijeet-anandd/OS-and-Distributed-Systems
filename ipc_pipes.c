#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 70
char * msg1 = "this is the first message that goes through the pipe" ;
char * msg2 = "followed by this message" ;
char * msg3 = "finally this message goes through!" ;
int main ( void ) {
char inbuf[MSGSIZE];
int p[2], i;
if (pipe(p) < 0)
exit(1);
write(p[1], msg1, MSGSIZE);
write(p[1], msg2, MSGSIZE);
write(p[1], msg3, MSGSIZE);
for (i = 0; i < 3; i++) {
read(p[0], inbuf, MSGSIZE);
printf( "% s\n" , inbuf);
}
return 0;
}