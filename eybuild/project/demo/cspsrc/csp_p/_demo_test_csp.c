/* NOTE: DO NOT EDIT THIS FILE,
 * this file is created by tool (CSP/eyBuild 1.1.2) automaticly,
 * build at: Sun Jul 27 17:49:51 2008
 */
/* NOTE: YOU SHOULDN'T ADD THIS FILE TO YOUR PROJECT DIRECTLY,
 * When you add `../xx_maplist.c' to your project,
 * this file will be added into your project. 
 */ 

#include <string.h>
#include <eblib.h>
                             
/** GLOBAL **/

int _demo_test_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_path = "/demo/";
    char * __page_name = "test.csp";
    char * __page_fullname = "/demo/test.csp";
    USE_THIS_PAGE()
/** DECLARE **/

/** ON_BEGIN **/

    if (__calldepth==MAX_CALL_DEPTH)
        __ret = ebDefMimeHeader();
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "<html>\n"
        "<head>\n"
        "	<title>eybuild CSP demo</title>\n"
        "</head>\n"
        "<body>\n"
        "	<P>This is in test.csp</P>\n"
        "	<P>What you input is: <B>"
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", getParameter("inputbox"));
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "</B></P>\n"
        "	<P>[ <A href=\""
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", cgiPrefix2(NULL, "/demo/main.csp"));
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "\">Return</A> ]</P>\n"
        "	</body>\n"
        "</html>\n"
        );

    goto_ERROR;

/** ON_END **/
ON_END:

    if (__calldepth==MAX_CALL_DEPTH && ERROR!=__ret && ERROR==ebBufFlush(__ebfp))
        __ret = ERROR;

    return __ret;

    EB_REMOVE_NOUSED_WARNING();
} /* _demo_test_csp__ */

