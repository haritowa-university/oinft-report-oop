extern struct FILE* STDIN;

int getchar() {
	return STDIN->read();
}