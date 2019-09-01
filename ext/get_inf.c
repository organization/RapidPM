#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ext.h"
#include "ext/standard/basic_functions.h"

#include "get_inf.h"

double get_inf() {
    return php_get_inf();
}
