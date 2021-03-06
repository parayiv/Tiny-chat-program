#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <netinet/in.h>
#include <strings.h>

#ifndef SQX_H
#define SQX_H

/* 
sqx.h - a header file for the squirrel express server/client
Author: Håkon Vågsether <hauk142@gmail.com>
*/

int errorExit(char *failDesc) // function for exiting on error
{
	perror(failDesc);
	exit(EXIT_FAILURE);
}
#ifdef SQX_CLIENT
	int row, col;
	WINDOW* Wmessages; // The status bar window
#endif
#endif
