#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int check_elf(unsigned char *e_ident) {
    return e_ident[EI_MAG0] == ELFMAG0 &&
           e_ident[EI_MAG1] == ELFMAG1 &&
           e_ident[EI_MAG2] == ELFMAG2 &&
           e_ident[EI_MAG3] == ELFMAG3;
}

void display_elf_header(Elf64_Ehdr elf_header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");

    printf("Class:                             %s\n",
           elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                              %s\n",
           elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d %s\n",
           elf_header.e_ident[EI_VERSION], (elf_header.e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : ""));
    printf("OS/ABI:                            UNIX - System V\n");
    printf("ABI Version:                       %d\n", elf_header.e_ident[EI_OSABI]);
    printf("Type:                              %d\n", elf_header.e_type);
    printf("Entry point address:               %lx\n", (unsigned long)elf_header.e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    Elf64_Ehdr elf_header;

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        exit(98);
    }

    if (!check_elf(elf_header.e_ident)) {
        fprintf(stderr, "%s is not an ELF file\n", argv[1]);
        close(fd);
        exit(98);
    }

    display_elf_header(elf_header);

    close(fd);
    return 0;
}

