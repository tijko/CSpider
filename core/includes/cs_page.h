#ifndef CS_PAGE_H
#define CS_PAGE_H
#endif

/*
  page carrier
*/

#define FileTypeErr 0
#define FileTypeHTML 1
#define FileTypeCSS 2
#define FileTypeJSON 3

struct cs_page_struct {
  void *data;
  unsigned int capacity;
  unsigned int used;
  char file_type;
};

/*
  page carrier'a queue
*/

#define MaxPageQueueNum 32
#define LogMaxPageQueueNum 5

struct cs_page_queue_struct {
  cs_page *pages;
  unsigned int capacity;
  unsigned int usage;
};

void clear_page(cs_page *p);

void destroy_page(cs_page *p);

int new_page(cs_page *p, unsigned int capacity);

int set_page(cs_page *p, char* context, unsigned int length);
