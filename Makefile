server : sqxserver.c sqx.h
	gcc -Wall -std=gnu99 -g sqxserver.c -o sqxs

client : sqxclient.c sqx.h
	gcc -Wall  -std=gnu99 -g sqxclient.c -o sqxc

all : sqxserver.c sqx.h sqxclient.c
	gcc -Wall -std=gnu99 -g sqxserver.c -o sqxs
	gcc -Wall  -std=gnu99 -g sqxclient.c -o sqxc

clean:
	rm sqxc sqxs
