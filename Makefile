##
## EPITECH PROJECT, 2021
## neptunia-lib
## File description:
## Makefile
##

SRC_NEPTUNIA =	neptunia/assert/assert.c \
				\
				neptunia/ctype/isalnum.c \
				neptunia/ctype/isalpha.c \
				neptunia/ctype/isascii.c \
				neptunia/ctype/iscntrl.c \
				neptunia/ctype/isdigit.c \
				neptunia/ctype/islower.c \
				neptunia/ctype/isprintable.c \
				neptunia/ctype/issign.c \
				neptunia/ctype/isspace.c \
				neptunia/ctype/isupper.c \
				neptunia/ctype/swap.c \
				neptunia/ctype/tolower.c \
				neptunia/ctype/toupper.c \
				\
				neptunia/list/array/list_add.c \
				neptunia/list/array/list_clear.c \
				neptunia/list/array/list_copy.c \
				neptunia/list/array/list_create.c \
				neptunia/list/array/list_delete.c \
				neptunia/list/array/list_get.c \
				neptunia/list/array/list_print.c \
				neptunia/list/array/list_sort.c \
				neptunia/list/array/list_to_table.c \
				\
				neptunia/list/hashmap/hashmap_add.c \
				neptunia/list/hashmap/hashmap_clear.c \
				neptunia/list/hashmap/hashmap_copy.c \
				neptunia/list/hashmap/hashmap_create.c \
				neptunia/list/hashmap/hashmap_delete.c \
				neptunia/list/hashmap/hashmap_get.c \
				neptunia/list/hashmap/hashmap_hash.c \
				neptunia/list/hashmap/hashmap_print.c \
				neptunia/list/hashmap/hashmap_sort.c \
				neptunia/list/hashmap/hashmap_to_list.c \
				neptunia/list/hashmap/hashmap_to_table.c \
				\
				neptunia/math/abs.c \
				neptunia/math/declen.c \
				neptunia/math/floor.c \
				neptunia/math/pow.c \
				neptunia/math/round.c \
				neptunia/math/sqrt.c \
				\
				neptunia/mem/calloc.c \
				neptunia/mem/realloc.c \
				\
				neptunia/printf/bprintf/bchar.c \
				neptunia/printf/bprintf/blist.c \
				neptunia/printf/bprintf/bnbr.c \
				neptunia/printf/bprintf/bprintf.c \
				neptunia/printf/bprintf/bstring.c \
				neptunia/printf/bprintf/bunbr.c \
				\
				neptunia/printf/param/param_digits.c \
				neptunia/printf/param/parse_param.c \
				neptunia/printf/print/printbinary.c \
				neptunia/printf/print/printdec.c \
				neptunia/printf/print/printfloat.c \
				neptunia/printf/print/printhex.c \
				neptunia/printf/print/printlist.c \
				neptunia/printf/print/printoctal.c \
				neptunia/printf/print/printptr.c \
				neptunia/printf/print/printstr.c \
				neptunia/printf/print/printulong.c \
				neptunia/printf/fprintf.c \
				neptunia/printf/printf.c \
				neptunia/printf/sprintf.c \
				neptunia/printf/vsprintf.c \
				\
				neptunia/string/atformat.c \
				neptunia/string/atof.c \
				neptunia/string/atoi.c \
				neptunia/string/memcpy.c \
				neptunia/string/memmove.c \
				neptunia/string/memset.c \
				neptunia/string/str_isalpha.c \
				neptunia/string/str_isdigit.c \
				neptunia/string/strbuf.c \
				neptunia/string/strcat.c \
				neptunia/string/strcmp.c \
				neptunia/string/strcpy.c \
				neptunia/string/strdup.c \
				neptunia/string/strlen.c \
				neptunia/string/strlwr.c \
				neptunia/string/strrev.c \
				neptunia/string/strstr.c \
				neptunia/string/strupr.c \
				neptunia/string/ullbuf.c \
				\
				neptunia/write/write.c \

SRC_HYPER_NEPTUNIA = 	hyper-neptunia/config/json/json_parser.c \
						hyper-neptunia/config/xml/writer/xml_free.c \
						hyper-neptunia/config/xml/writer/xml_serialize.c \
						hyper-neptunia/config/xml/writer/xml_writer.c \
						hyper-neptunia/config/xml/xml_parser.c \
						\
						hyper-neptunia/string/format/format_int.c \
						hyper-neptunia/string/format/format_string.c \
						hyper-neptunia/string/regex/regex_find.c \
						hyper-neptunia/string/regex/regex_skip.c \
						hyper-neptunia/string/regex/regex_test.c \
						hyper-neptunia/string/string_concat.c \
						hyper-neptunia/string/string_contains.c \
						hyper-neptunia/string/string_copy_at.c \
						hyper-neptunia/string/string_copy.c \
						hyper-neptunia/string/string_create.c \
						hyper-neptunia/string/string_equals_at.c \
						hyper-neptunia/string/string_equals.c \
						hyper-neptunia/string/string_format_space.c \
						hyper-neptunia/string/string_format.c \
						hyper-neptunia/string/string_index.c \
						hyper-neptunia/string/string_matches.c \
						hyper-neptunia/string/string_remove.c \
						hyper-neptunia/string/string_split.c \
						hyper-neptunia/string/string_start_with.c \
						hyper-neptunia/string/string_table_free.c \

OBJ_NEPTUNIA = $(SRC_NEPTUNIA:.c=.o)
OBJ_HYPER_NEPTUNIA = $(SRC_HYPER_NEPTUNIA:.c=.o)

GCC = gcc

C_WARNING_FLAGS = -Wextra -Wall

INCLUDE_FLAGS = -I include

C_FLAGS = $(C_WARNING_FLAGS) $(INCLUDE_FLAGS)

.c.o:
	@echo "$(notdir $(CURDIR)): C '$<'"
	@$(GCC) $(C_FLAGS) -c -o $*.o $<

all: $(OBJ_NEPTUNIA) $(OBJ_HYPER_NEPTUNIA)
	@ar rc libnep.a $(OBJ_NEPTUNIA) $(OBJ_HYPER_NEPTUNIA)
.PHONY : all

clean:
	@find . \( -name "*.o" -or -name "*.a" \) -delete
.PHONY : clean