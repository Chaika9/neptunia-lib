##
## EPITECH PROJECT, 2020
## LibC
## File description:
## Makefile
##

SRC =	LibC/assert/assert.c \
		\
		LibC/ctype/isalnum.c \
		LibC/ctype/isalpha.c \
		LibC/ctype/isascii.c \
		LibC/ctype/iscntrl.c \
		LibC/ctype/isdigit.c \
		LibC/ctype/islower.c \
		LibC/ctype/isprintable.c \
		LibC/ctype/issign.c \
		LibC/ctype/isspace.c \
		LibC/ctype/isupper.c \
		LibC/ctype/swap.c \
		LibC/ctype/tolower.c \
		LibC/ctype/toupper.c \
		\
		LibC/list/array/append.c \
		LibC/list/array/clear.c \
		LibC/list/array/copy.c \
		LibC/list/array/delete.c \
		LibC/list/array/get.c \
		LibC/list/array/list.c \
		LibC/list/array/print.c \
		LibC/list/array/sort.c \
		\
		LibC/list/hashmap/append.c \
		LibC/list/hashmap/clear.c \
		LibC/list/hashmap/copy.c \
		LibC/list/hashmap/delete.c \
		LibC/list/hashmap/get.c \
		LibC/list/hashmap/hash.c \
		LibC/list/hashmap/hashmap.c \
		LibC/list/hashmap/list.c \
		LibC/list/hashmap/print.c \
		LibC/list/hashmap/sort.c \
		\
		LibC/math/abs.c \
		LibC/math/declen.c \
		LibC/math/floor.c \
		LibC/math/pow.c \
		LibC/math/round.c \
		LibC/math/sqrt.c \
		\
		LibC/printf/param/param_digits.c \
		LibC/printf/param/parse_param.c \
		LibC/printf/print/manage/printbase.c \
		LibC/printf/print/manage/printstr.c \
		LibC/printf/print/printbinary.c \
		LibC/printf/print/printdec.c \
		LibC/printf/print/printfloat.c \
		LibC/printf/print/printhex.c \
		LibC/printf/print/printlist.c \
		LibC/printf/print/printoctal.c \
		LibC/printf/print/printptr.c \
		LibC/printf/print/printstr.c \
		LibC/printf/print/printulong.c \
		LibC/printf/fprintf.c \
		LibC/printf/printf.c \
		LibC/printf/sprintf.c \
		LibC/printf/vsprintf.c \
		\
		LibC/string/atformat.c \
		LibC/string/atof.c \
		LibC/string/atoi.c \
		LibC/string/memcpy.c \
		LibC/string/memset.c \
		LibC/string/str_isalpha.c \
		LibC/string/str_isdigit.c \
		LibC/string/strcat.c \
		LibC/string/strcmp.c \
		LibC/string/strcpy.c \
		LibC/string/strdup.c \
		LibC/string/strlen.c \
		LibC/string/strlwr.c \
		LibC/string/strrev.c \
		LibC/string/strstr.c \
		LibC/string/strupr.c \
		\
		LibC/write/write.c \

OBJ = $(SRC:.c=.o)

GCC = gcc

C_WARNING_FLAGS = -Werror -Wextra -Wall

INCLUDE_FLAGS = -I include

C_FLAGS = $(C_WARNING_FLAGS) $(INCLUDE_FLAGS)

.c.o:
	@echo "$(notdir $(CURDIR)): C '$<'"
	@$(GCC) $(C_FLAGS) -c -o $*.o $<

all: $(OBJ)
	@ar rc libnep.a $(OBJ)
.PHONY : all

clean:
	@find . \( -name "*.o" -or -name "*.a" \) -delete
.PHONY : clean