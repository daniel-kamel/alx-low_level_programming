#ifndef MAIN_H

#define MAIN_H
/*include files*/
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Constants*/
#define READ_BUF_SIZE 1024

/*Function prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);

#endif
