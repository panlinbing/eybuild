/* NOTE: DO NOT EDIT THIS FILE,
 * this file is created by tool (CSP/eybuild 1.0.3) automaticly,
 * build at: Mon Oct 09 23:31:48 2006
 */
/* NOTE: YOU SHOULDN'T ADD THIS FILE TO YOUR PROJECT DIRECTLY,
 * When you add `../xx_maplist.c' to your project,
 * this file will be added into your project. 
 */ 

#include <string.h>
#include <eblib.h>
                              
/** GLOBAL **/

static int _basic_logo_csp___mime_header(void * __ebfp);

int _basic_logo_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "logo.csp";
    char * __page_path = "/basic/";
    char * __page_fullname = "/basic/logo.csp";
/** DECLARE **/

/** ON_BEGIN **/

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_basic_logo_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "<HTML>\n"
        "<HEAD>\n"
        "<TITLE>Logo</TITLE>\n"
        "<META content=\"text/html; charset=gb2312\" http-equiv=Content-Type>\n"
        "<STYLE type=text/css>\n"
        "A.tp:visited {\n"
        "	COLOR: #ffffff; TEXT-DECORATION: none; underline: none\n"
        "}\n"
        "A.tp:hover {\n"
        "	COLOR: #ff4000; TEXT-DECORATION: none\n"
        "}\n"
        "A.tp:link {\n"
        "	COLOR: #ffffff; TEXT-DECORATION: none; underline: none\n"
        "}\n"
        ".font {\n"
        "	COLOR: #ffffff; FONT-FAMILY: \"Times New Roman\", \"����\"; FONT-SIZE: 12px\n"
        "}\n"
        "</STYLE>\n"
        "</HEAD>\n"
        "<BODY leftMargin=0 topMargin=0>\n"
        "<TABLE border=0 cellPadding=0 cellSpacing=0 class=font width=133>\n"
        "  <TBODY>\n"
        "    <TR>\n"
        "      <TD align=left bgColor=#0052a4 height=59 vAlign=top width=133><IMG border=0 height=59 src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/logo.jpg\" width=133> </TD>\n"
        "    </TR>\n"
        "    <TR>\n"
        "      <TD bgColor=#173a7e height=3 width=133></TD>\n"
        "    </TR>\n"
        "  </TBODY>\n"
        "</TABLE>\n"
        "</BODY>\n"
        "</HTML>\n"
        );

    goto_ERROR;

/** ON_END **/
ON_END:

    if ((__calldepth==MAX_CALL_DEPTH) && ERROR == ebBufFlush(__ebfp))
        return ERROR;

    return __ret;

    EB_REMOVE_NOUSED_WARNING();
} /* _basic_logo_csp__ */

static int _basic_logo_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}

