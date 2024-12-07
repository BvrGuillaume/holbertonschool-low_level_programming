#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* read_textfile - Lit un fichier texte et l'imprime sur la sortie standard.
* @filename: Le nom du fichier à lire.
* @letters: Le nombre de lettres à lire et imprimer.
*
* Return: Le nombre réel de lettres lues et imprimées,
*         ou 0 en cas d'erreur.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	size_t total_bytes_written = 0;
	char ch;

	if (filename == NULL)
	return (0);
		fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	while (letters > 0 && (bytes_read = read(fd, &ch, 1)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, &ch, 1);
	if (bytes_written != 1)
	{
		close(fd);
	return (0);
	}
		total_bytes_written += bytes_written;
		letters--;
	}
	if (bytes_read == -1)
	{
		close(fd);
	return (0);
	}
		close(fd);
	return (total_bytes_written);
}
