void open(char* name, int mode) {/*...*/};
void close() {/*...*/};
int read() {int c;/*...*/ return c;};
void write(char) {/*...*/};
void seek(long index, int mode) {/*...*/};

struct FILE console = {open, close, read, write, seek};