#include <stdio.h>

#ifdef DEBUG
#define LOG_INFO(format, ...)                                \
  do {                                                         \
    fprintf(stdout, "[LOG]  INFO\t%s  %s:%d  " format "\n",      \
      __FUNCTION__,                                            \
      __FILE__,                                                \
      __LINE__,                                                \
      ##__VA_ARGS__);                                          \
  } while(0)

#define LOG_ERROR(format, ...)                                \
  do {                                                         \
    fprintf(stderr, "[LOG]  ERROR\t%s  %s:%d  " format "\n",      \
      __FUNCTION__,                                            \
      __FILE__,                                                \
      __LINE__,                                                \
      ##__VA_ARGS__);                                          \
  } while(0)

#else
#define LOG_INFO(format, ...)
#define LOG_ERROR(format, ...)
#endif
