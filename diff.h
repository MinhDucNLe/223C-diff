typedef struct para para;
struct para {
	char **base;
	int filesize;
	int start;
  	int stop;
  	//char *firstline;
  	//char *secondline;
};

para *para_make(char *base[], int size, int start, int stop);
para *para_first(char *base[], int size);
void para_destroy(para *p);
para *para_next(para *p);
size_t para_filesize(para *p);
size_t para_size(para *p);
char **para_base(para *p);
char *para_info(para *p);
int para_equal(para *p, para *q);
void para_print(para *p, void (*fp)(const char*));
void para_printfile(char* base[], int count, void (*fp)(const char*));

void printline(void);
char *yesorno(int condition);
FILE *openfile(const char *filename, const char *openflags);
void printleft(const char *left);
void printright(const char *right);
void printboth(const char *left_right);
void version(void);
void loadfiles(const char* filename1, const char* filename2);
void print_option(const char* name, int value);
void diff_output_conflict_error(void);
void setoption(const char *arg, const char *s, const char *t, int *value);
void showoptions(const char* file1, const char* file2);
void init_options_files(int argc, const char* argv[]);
void brief(para *p, para *q);
void identical(para * p, para *q);
void normal(para *p, para *q);
