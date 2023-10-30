#include "main.h"
/**
 * append_text_to_file - function to append text to a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 sucess -1 failure
 * Code by Linus Obura
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t content_length, bytes_written;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	
	if (file_descriptor == -1)
        return (-1);
	
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, content_length);
		
		if (bytes_written != content_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	
	close(file_descriptor);
	return (1);
}
