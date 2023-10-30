#include "main.h"
#include <elf.h>
/**
* check_elf - function to check elf
* @e_ident: ident
* Return: ident
*/
int check_elf(unsigned char *e_ident)
{
	return (e_ident[EI_MAG0] == ELFMAG0 &&
		e_ident[EI_MAG1] == ELFMAG1 &&
		e_ident[EI_MAG2] == ELFMAG2 &&
		e_ident[EI_MAG3] == ELFMAG3);
}
/**
* get_e_type_desc - function to check elf
* @e_type: ident
* Return: ident
*/
const char *get_e_type_desc(int e_type)
{
	switch (e_type)
	{
		case ET_NONE: return "NONE (No file type)";
		case ET_REL: return "REL (Relocatable file)";
		case ET_EXEC: return "EXEC (Executable file)";
		case ET_DYN: return "DYN (Shared object file)";
		case ET_CORE: return "CORE (Core file)";
		default: return "UNKNOWN";
	}
}
/**
* get_e_type_desc - function to check elf
* @e_type: ident
* Return: ident
*/
void display_elf_header(Elf64_Ehdr elf_header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("Class:                             %s\n",
		elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n",
		elf_header.e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d %s\n",
		elf_header.e_ident[EI_VERSION],
		(elf_header.e_ident[EI_VERSION] == EV_CURRENT ?
		"(current)" : ""));
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %d\n",
		elf_header.e_ident[EI_OSABI]);
	printf("Type:                              %s\n",
		get_e_type_desc(elf_header.e_type));
	printf("Entry point address:               %lx\n",
		(unsigned long)elf_header.e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		exit(98);
	}
	if (!check_elf(elf_header.e_ident))
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	display_elf_header(elf_header);
	close(fd);
	return (0);
}

