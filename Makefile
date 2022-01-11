CC      = gcc
FILES   = log.c support.c buffer.c server.c
OUT_EXE = http_server
LDFLAGS = -pthread -lrt
build:
	$(CC) $(FILES) -o $(OUT_EXE) $(LDFLAGS)

clean:
	rm $(OUT_EXE) 

rebuild: clean build
