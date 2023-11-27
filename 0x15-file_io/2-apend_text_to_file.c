#include "main.h"

/**
 * append_text_to_file - APPENDS TEXT AT THE END OF A FILE
 * @filename: A POINTER TO THE NAME OF THE FILE
 * @text_content: THE STRING TO ADD AT THE END OF A FILE
 *
 * Return: if the fucntion fails or file name is NULL - -1
 *	if the file does not exist the user lacks write permissions - -1
 *	otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
