#include <string.h>
#define rt_memset(data, val, n) memset(data, val, n)
#define rt_memcpy(dst, src, n)  memcpy(dst, src, n)
#define rt_strncmp(s1, s2, n)   strncmp(s1 ,s2, n)
#define rt_strcmp(s1, s2)       strcmp(s1, s2)
#define rt_strlen(s)            strlen(s)
#define rt_strnlen(s, n)        strnlen(s, n)
#define rt_strdup(s)            strdup(s)
#define rt_strstr(s1, s2)       strstr(s1, s2)
#define rt_strncpy(dst, src, n) strncpy(dst, src, n)
#define rt_memmove(dst, src, n) memmove(dst, src, n)
#define rt_memcmp(s1, s2, n)    memcmp(s1, s2, n)
#define rt_strcasecmp(s1, s2, n) strcasecmp(s1, s2, n)
