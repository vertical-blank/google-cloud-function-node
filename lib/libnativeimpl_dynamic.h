#ifndef __LIBNATIVEIMPL_H
#define __LIBNATIVEIMPL_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef char* (*Java_org_pkg_apinative_Native_hello_fn_t)(graal_isolatethread_t*);

typedef char* (*format_sql_fn_t)(graal_isolatethread_t*, char*);

#if defined(__cplusplus)
}
#endif
#endif
