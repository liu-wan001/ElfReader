#ifndef ELF_DEF_H
#define ELF_DEF_H

#include "elf.h"



#ifdef  ELF32
typedef    Elf32_Ehdr    Elf_Ehdr;
typedef    Elf32_Phdr    Elf_Phdr;
typedef    Elf32_Shdr    Elf_Shdr;
typedef    Elf32_Off     Elf_Off;
typedef    Elf32_Addr    Elf_Addr;
typedef    Elf32_Half    Elf_Half;
typedef    Elf32_Word    Elf_Word;
typedef    Elf32_Dyn     Elf_Dyn;
typedef    Elf32_Sym     Elf_Sym;




#define    ELF_CAT(_name_)    elf32_##_name_

#endif


#ifdef  ELF64
typedef    Elf64_Ehdr    Elf_Ehdr;
typedef    Elf64_Phdr    Elf_Phdr;
typedef    Elf64_Shdr    Elf_Shdr;
typedef    Elf64_Off     Elf_Off;
typedef    Elf64_Addr    Elf_Addr;
typedef    Elf64_Half    Elf_Half;
typedef    Elf64_Word    Elf_Word;
typedef    Elf64_Dyn     Elf_Dyn;
typedef    Elf64_Sym     Elf_Sym;

#define    ELF_CAT(_name_)    elf64_##_name_

#endif


void elf32_parse_elf(void *pointer);
void elf64_parse_elf(void *pointer);

int elf32_init_elf_header_info(int offset, void *pointer);
int elf64_init_elf_header_info(int offset, void *pointer);

int elf32_init_program_header_info(int offset, void *pointer);
int elf64_init_program_header_info(int offset, void *pointer);

int elf32_init_section_header_info(int offset, void *pointer);
int elf64_init_section_header_info(int offset, void *pointer);

int elf32_init_dynamic_section(int offset, void *pointer);
int elf64_init_dynamic_section(int offset, void *pointer);

int elf32_init_symtab_header_info(int offset, void *pointer);
int elf64_init_symtab_header_info(int offset, void *pointer);

#endif // !ELF_DEF_H
