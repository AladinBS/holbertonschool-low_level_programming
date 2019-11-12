#include "holberton.h"
/**
* read_textfile - reads a text file and prints the letters
* @filename: filename
* @letters: numbers of letters.//Aladin Bensassi
* Return: numbers of letters printed. else, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ala;
ssize_t nrd, nwr;
char *buf;
if (!filename)
return (0);
ala = open(filename, O_RDONLY);
if (ala == -1)
return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);
nrd = read(ala, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);
close(ala);
free(buf);
return (nwr);
}
