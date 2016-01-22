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
#include "_security_ping_csp.h"

/** GLOBAL **/

static int _security_ping_csp___mime_header(void * __ebfp);

int _security_ping_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "ping.csp";
    char * __page_path = "/security/";
    char * __page_fullname = "/security/ping.csp";
/** DECLARE **/

/** ON_BEGIN **/
    BROADBAND_ROUTER 	bbr[1];
    char				errmsg[256] = "";
    
    /* load first */
    load_bbr(bbr, errmsg);
    
    /* save user submit */
    if (!isblankstr(G("Save"))) {
    bbr->disable_wan_ping = atoi(G("ping"));
    save_bbr(bbr, errmsg);
    }
    

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_security_ping_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "<HTML>\n"
        "<HEAD>\n"
        "<TITLE>Other</TITLE>\n"
        "<META content=\"text/html; charset=gb2312\" http-equiv=Content-Type>\n"
        "<META content=no-cache http-equiv=pragma>\n"
        "<META content=\"wed, 26 Feb 1997 08:21:57 GMT\" http-equiv=expires>\n"
        "<LINK \n"
        "href=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/bbr.css\" rel=stylesheet type=text/css>\n"
        "<SCRIPT language=JavaScript src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/commonfuncs1.js\" \n"
        "type=text/JavaScript><!--\n"
        "//--></SCRIPT>\n"
        "<SCRIPT language=JavaScript><!-- \n"
        "if(window.parent == window){window.location.href=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", getScriptName());
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\";}\n"
        "function Click(){ window.event.returnValue=false;}\n"
        "document.oncontextmenu=Click;\n"
        "function doSubmit(){\n"
        "return true;}\n"
        "//--></SCRIPT>\n"
        "</HEAD>\n"
        "<BODY>\n"
        "<CENTER>\n"
        "  <FORM action=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", thisCgiPrefix());
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\" method=post>\n"
        "    <TABLE border=0 cellPadding=0 cellSpacing=0 width=502>\n"
        "      <TBODY>\n"
        "        <TR>\n"
        "          <TD class=title width=7><IMG height=24 src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/arc.gif\" \n"
        "width=7></TD>\n"
        "          <TD align=left class=title vAlign=center width=495>WAN口Ping</TD>\n"
        "        </TR>\n"
        "        <TR>\n"
        "          <TD colSpan=2><TABLE border=0 cellPadding=0 cellSpacing=0 width=502>\n"
        "              <TBODY>\n"
        "                <TR>\n"
        "                  <TD class=vline rowSpan=15><BR></TD>\n"
        "                  <TD width=500><TABLE align=center border=0 cellPadding=0 cellSpacing=0 class=space \n"
        "            width=400>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD><TABLE border=0 cellPadding=0 cellSpacing=0 class=space \n"
        "                  width=398>\n"
        "                              <TBODY>\n"
        "                              </TBODY>\n"
        "                            </TABLE>\n"
        "                            <TABLE border=0 cellPadding=0 cellSpacing=0 class=space \n"
        "                  width=398>\n"
        "                              <TBODY>\n"
        "                                <TR>\n"
        "                                  <TD width=140>忽略来自WAN口的Ping：</TD>\n"
        "                                  <TD>"
        );
    goto_ERROR;

    CHECK_BOX2("ping", "2", bbr->disable_wan_ping, "id=ping");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "</TD>\n"
        "                                </TR>\n"
        "                              </TBODY>\n"
        "                            </TABLE></TD>\n"
        "                        </TR>\n"
        "                      </TBODY>\n"
        "                    </TABLE></TD>\n"
        "                  <TD class=vline rowSpan=15><BR></TD>\n"
        "                </TR>\n"
        "                <TR>\n"
        "                  <TD class=hline><IMG height=1 src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/empty.gif\" \n"
        "        width=1></TD>\n"
        "                </TR>\n"
        "                <TR>\n"
        "                  <TD class=tail height=30>&nbsp;\n"
        "                    <INPUT class=button id=Submit name=Save type=submit value=\"保 存\">\n"
        "&nbsp; &nbsp;</TD>\n"
        "                </TR>\n"
        "                <TR>\n"
        "                  <TD class=hline><IMG height=1 src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/empty.gif\" \n"
        "        width=1></TD>\n"
        "                </TR>\n"
        "              </TBODY>\n"
        "            </TABLE></TD>\n"
        "        </TR>\n"
        "      </TBODY>\n"
        "    </TABLE>\n"
        "  </FORM>\n"
        "</CENTER>\n"
        "<META content=no-cache http-equiv=pragma>\n"
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
} /* _security_ping_csp__ */

static int _security_ping_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}

