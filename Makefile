OBJ_FILES=src/main.o src/settings.o src/users.o
GTK_LIB=`pkg-config --cflags --libs gtk+-3.0`

all: app 

src/%.o : src/%.c
	gcc -Wall -c -o $@ $(GTK_LIB) $< 

app : $(OBJ_FILES)
	gcc -Wall -o app $(OBJ_FILES) $(GTK_LIB) -export-dynamic

clean:
	rm -f app src/*.o