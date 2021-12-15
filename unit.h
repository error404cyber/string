include "string.h"
  
 typedef enum Error { OK, NOT_OK } Error;

void run_all_tests();
Error test_strlen();
Error test_strcmp();
Error test_strcpy();
Error test_strstr();
Error test_strdup();
Error test_memchr();
Error test_memset();
Error test_memcpy();
Error test_strchr();
