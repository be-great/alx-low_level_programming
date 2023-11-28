#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);

void print_header_info(Elf64_Ehdr *header);
void print_magic(unsigned char *e_ident);

void print_class(unsigned char *e_ident);

void print_data(unsigned char *e_ident);

void print_version(unsigned char *e_ident);

void print_osabi(unsigned char *e_ident);

void print_abi(unsigned char *e_ident);

void print_type(unsigned int e_type, unsigned char *e_ident);

void print_entry(unsigned long int e_entry, unsigned char *e_ident);

void close_elf(int elf);

/**
* check_elf - check if the file is elf file or not
* @e_ident: e_ident array, which contains magic numbers
* and other identification information.
*/
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)

	{
		if (e_ident[index] != 127 && e_ident[index] != 'E' &&
					e_ident[index] != 'L' && e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
* print_magic - print the magic number and information
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/

void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)

	{
		printf("%02x%s", e_ident[index], (index == EI_NIDENT - 1) ? "\n" : " ");
	}
}
/**
* print_class - print the classes of the header file none or elf23 or elf64
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/
void print_class(unsigned char *e_ident)
{
	const char *class_names[] = {"none", "ELF32", "ELF64"};

	printf("  Class:                             ");
	if (e_ident[EI_CLASS] <= ELFCLASS64)
	{
		printf("%s\n", class_names[e_ident[EI_CLASS]]);
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
* print_data - print the endian type little , big endian
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/
void print_data(unsigned char *e_ident)
{
	const char *data_names[] = {"none", "2's complement, little endian",

	"2's complement, big endian"};

	printf("  Data:                              ");
	if (e_ident[EI_DATA] <= ELFDATA2MSB)
	{
		printf("%s\n", data_names[e_ident[EI_DATA]]);
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
* print_version - print the elf version
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d%s", e_ident[EI_VERSION],
			(e_ident[EI_VERSION] == EV_CURRENT) ? " (current)\n" : "\n");
}
/**
* print_osabi - print the os and the application binary interface
* ABI : is like a rulebook that different parts of a computer program
* follow when they need to work together. It's a set of agreements on
* how things should be done so that everyone can understand each other.
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;

	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
* print_abi - print the ABI version
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
/**
* print_type - print the type of of the ELF
* (executable, shared object)
* @e_type: the type
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/

void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
* print_entry - print the entry point address of the elf file
* @e_entry: the entry point
* @e_ident:e_ident array, which contains magic numbers
* and other identification information.
*/

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
* close_elf - close the elf header
* @elf: the elf header open
*/
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
* print_header_info - print the necessory info
* @header: the header
*/

void print_header_info(Elf64_Ehdr *header)
{
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
}
/**
* main - Entry point
* @argc: unused variable argc
* @argv: the argument list
* Return: 0 Always (Success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	print_header_info(header);

	free(header);
	close_elf(o);
	return (0);
}
