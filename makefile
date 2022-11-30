SRCS = src/main.c src/game.c src/entity.c src/items.c
EXE = Tombs_of_Hell
CFLAGS = -Wall
LDFLAGS =
LIBS =
LD = clang
OBJS = $(SRCS:%.c%=%.o)

default: all

all:$(EXE)

$(EXE): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(EXE) $(LIBS)
	
clean:
	-rm -f $(EXE)
	-rm -f $(OBJS)
	
main.o: src/main.c src/main.h
game.o: src/game.c src/game.h src/levels.h
entity.o: src/entity.c src/entity.h
items.o: src/items.c src/items.h