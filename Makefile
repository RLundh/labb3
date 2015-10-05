# Tex settings
C_COMPILER   = gcc
C_OPTIONS    = -ggdb -Wall -std=c99 -g 

# Clean settings
GEN_EXTENSIONS = *.o *.out

# SCM
VC_PROGRAM = hg

# Remember: $< expands to dependent file
#           $@ expands to target file

all: labb3.c common.c  value.c labb3.h common.h  value.h
	$(C_COMPILER) $(C_OPTIONS) labb3.c common.c  value.c -o labb3.out -lm

clean:	*.o *.out *.h.gch
	rm *.o *.out *.h.gch


common: common.c common.h
	$(C_COMPILER) $(C_OPTIONS) -c common.c common.h -lm
	
value: value.c value.h
	$(C_COMPILER) $(C_OPTIONS) -c value.c value.h -lm
	