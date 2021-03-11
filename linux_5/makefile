CFLAF=-g
BIN1=A
BIN2=B
all:$(BIN1) $(BIN2)
$(BIN1):test1.c
	gcc $^ -o $@ $(CFLAF)
$(BIN2):main.c
	gcc $^ -o $@
clean:
	rm $(BIN1) $(BIN2)
