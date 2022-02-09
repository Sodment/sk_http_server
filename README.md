# sk_http_server
Simple http server written in pure C for My CompSci course, it is a multithreader server able to handle GET, HEAD, DELETE requests

# Compile & Run
Designed only fo use in UNIX based OS

Compile:

``` make ```

Run by:

```./server```

Opotional flags

``` -d path``` path to server files (where u store images etc for GET requests (defaults to folder that the server was started)

``` -q buffer_size ``` size of buffer to read/write from when requested (defaults to 4096 bytes)

``` -p ``` port to serve on (must be outside of alreadty taken ports otherwise it will throw error)

``` -v OPTION``` sets the debug level of messages in console (OPTION should be either INFO, DEBUG, WARNING, defaults to INFO) 

``` -w n``` where n is a number of maximum clients that the server could handle (defaults to 10)

Starting without ```-w``` flag will asssume a single threaded server (limits the amount of clients that can connect at once to 1 and other requests will be FIFO executed)
