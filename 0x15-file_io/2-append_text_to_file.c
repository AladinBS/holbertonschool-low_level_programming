#include "holberton.h"
/**
* append_text_to_file - appends text at the end
* @filename: filename.
* @text_content: added content.
* Return: 1 if the file exists, else -1 if the fails does not exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
int ala;
int len;
int x;
if (!filename)
return (-1);
ala = open(filename, O_WRONLY | O_APPEND);
if (ala == -1)
return (-1);
if (text_content)
{
for (len = 0; text_content[len]; len++)
;
x = write(ala, text_content, len);
if (x == -1)
return (-1);
}
close(ala);
return (1);
}
