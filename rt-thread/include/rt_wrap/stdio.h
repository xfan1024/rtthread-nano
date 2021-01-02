#include <stdio.h>

#define rt_vsprintf(buf, fmt, arg)          vsprintf(buf, fmt, arg)
#define rt_vsnprintf(buf, size, fmt, arg)   vsnprintf(buf, size, fmt, arg)
#define rt_sprintf(buf, fmt, ...)           sprintf(buf, fmt, ##__VA_ARGS__)
#define rt_snprintf(buf, fmt, ...)          snprintf(buf, fmt, ##__VA_ARGS__)
#define rt_sscanf(buf, fmt, ...)            sscanf(buf, fmt, ##__VA_ARGS__)
