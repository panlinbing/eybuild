/* NOTE: DO NOT EDIT THIS FILE,
 * this file is created by tool (CSP/eyBuild 1.1.2) automaticly,
 * build at: Sun Jul 27 17:49:50 2008
 */
/* NOTE: YOU SHOULDN'T ADD THIS FILE TO YOUR PROJECT DIRECTLY,
 * When you add `../xx_maplist.c' to your project,
 * this file will be added into your project. 
 */ 

#include <string.h>
#include <eblib.h>
                             
/** GLOBAL **/

int _demo_main_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_path = "/demo/";
    char * __page_name = "main.csp";
    char * __page_fullname = "/demo/main.csp";
    USE_THIS_PAGE()
/** DECLARE **/

/** ON_BEGIN **/

    if (__calldepth==MAX_CALL_DEPTH)
        __ret = ebDefMimeHeader();
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "<html>\n"
        "<head>\n"
        "	<title>eybuild/CSP demo</title>\n"
        "</head>\n"
        "<body>\n"
        "thispage->name: "
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", thispage->name);
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "<br>\n"
        "thispage->path: "
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", thispage->path);
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "<br>\n"
        "thispage->fullname: "
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", thispage->fullname);
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "<br>\n"
        );
    goto_ERROR;

    { static int	num=0;
    __ret = ebBufStringAdd(__ebfp, 
        "<p>FastCGI Counter: "
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%d", ++num);
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "</p>\n"
        );
    goto_ERROR;

    }
    __ret = ebBufStringAdd(__ebfp, 
        "\n"
        "Hello world. <img src=\""
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", romPrefix2(NULL, "/img/face.gif"));
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "\">\n"
        "<BR>\n"
        "<form action=\""
        );
    goto_ERROR;

    __ret = ebprintf(__ebfp, "%s", cgiPrefix2(NULL, "/demo/test.csp"));
    goto_ERROR;

    __ret = ebBufStringAdd(__ebfp, 
        "\" method=\"post\">\n"
        "    Input: <input type=\"text\" name=\"inputbox\"><p>\n"
        "    <input type=\"submit\" name=\"testit\" value=\"testit\"><br>\n"
        "</form>\n"
        "</body>\n"
        "</html>\n"
        );

    goto_ERROR;

/** ON_END **/
ON_END:

    if (__calldepth==MAX_CALL_DEPTH && ERROR!=__ret && ERROR==ebBufFlush(__ebfp))
        __ret = ERROR;

    return __ret;

    EB_REMOVE_NOUSED_WARNING();
} /* _demo_main_csp__ */

