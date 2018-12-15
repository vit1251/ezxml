
#include <stdio.h>

#include "ezxml.h"


int main(int argc, char **argv)
{
    ezxml_t xml;
    char *s;
    const char *err;
    int rc;

    xml = ezxml_parse_file("test.xml");
    if (xml==NULL) {
        rc = 1;
        goto out;
    }

    s = ezxml_toxml(xml);
    fprintf(stdout, "%s\n", s);

    free(s);

    err = ezxml_error(xml);
    fprintf(stderr, "%s", err);
    // Complete
    rc = 0;
  out:
    if (xml != NULL) {
        ezxml_free(xml);
        xml=NULL;
    }
    return rc;
}
