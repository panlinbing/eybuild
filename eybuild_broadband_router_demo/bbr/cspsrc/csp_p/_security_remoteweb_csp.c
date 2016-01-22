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
#include "_security_remoteweb_csp.h"

/** GLOBAL **/

static int _security_remoteweb_csp___mime_header(void * __ebfp);

int _security_remoteweb_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "remoteweb.csp";
    char * __page_path = "/security/";
    char * __page_fullname = "/security/remoteweb.csp";
/** DECLARE **/

/** ON_BEGIN **/
    BROADBAND_ROUTER 	bbr[1];
    char				errmsg[256] = "";
    
    /* load first */
    load_bbr(bbr, errmsg);
    
    /* save user submit */
    if (!isblankstr(G("Save"))) {
    bbr->rmanage.wan_port = atoi(G("port"));
    strcpy(bbr->rmanage.remote_manage_host, G("ip"));
    save_bbr(bbr, errmsg);
    }
    

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_security_remoteweb_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "<HTML>\n"
        "<HEAD>\n"
        "<TITLE>control</TITLE>\n"
        "<META http-equiv=Content-Type content=\"text/html; charset=gb2312\">\n"
        "<META http-equiv=pragma content=no-cache>\n"
        "<META http-equiv=expires content=\"wed, 26 Feb 1997 08:21:57 GMT\">\n"
        "<LINK \n"
        "href=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/bbr.css\" type=text/css rel=stylesheet>\n"
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
        "var controlport;\n"
        "function doLoad(){controlport = document.forms[0].port.value;}\n"
        "function doSubmit(){\n"
        "if(document.forms[0].port.value != \"\"){\n"
        "if(!is_port(document.forms[0].port.value)){	\n"
        "var element =document.forms[0].port;\n"
        "if(element){element.focus();element.select();}\n"
        "return false;}}\n"
        "if(document.forms[0].ip.value != \"\"){\n"
        "if(!is_ipaddr(document.forms[0].ip.value)){	\n"
        "var element =document.forms[0].ip;\n"
        "if(element){element.focus();element.select();}\n"
        "return false;}}\n"
        "if(document.forms[0].port.value != \"\" && controlport != document.forms[0].port.value)\n"
        "alert(\"注意：只有在您重启路由器后，WEB管理端口的更改才能生效！\");	\n"
        "return true;}\n"
        "//--></SCRIPT>\n"
        "</HEAD>\n"
        "<BODY onload=doLoad();>\n"
        "<CENTER>\n"
        "  <FORM action=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", thisCgiPrefix());
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\"  method=post onsubmit=\"return doSubmit();\">\n"
        "    <TABLE cellSpacing=0 cellPadding=0 width=502 border=0>\n"
        "      <TBODY>\n"
        "        <TR>\n"
        "          <TD class=title width=7><IMG height=24 \n"
        "      src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/arc.gif\" width=7></TD>\n"
        "          <TD class=title vAlign=center align=left width=495>远端WEB管理</TD>\n"
        "        </TR>\n"
        "        <TR>\n"
        "          <TD colSpan=2><TABLE cellSpacing=0 cellPadding=0 width=502 border=0>\n"
        "              <TBODY>\n"
        "                <TR>\n"
        "                  <TD class=vline rowSpan=15><BR></TD>\n"
        "                  <TD width=500><TABLE class=space cellSpacing=0 cellPadding=0 width=400 \n"
        "            align=center border=0>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD>本页设置路由器的WEB管理端口，同时也设置允许从广域网中执行远端WEB管理的计算机的IP地址。</TD>\n"
        "                        </TR>\n"
        "                      </TBODY>\n"
        "                    </TABLE>\n"
        "                    <TABLE class=space cellSpacing=0 cellPadding=0 width=400 \n"
        "            align=center border=0>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD class=top width=49>注意：</TD>\n"
        "                          <TD \n"
        "                  width=351>1、本路由器默认的WEB管理端口为80，如果您改变了该默认值（例如改为8080），则您必须用“IP地址:端口”的方式（例如http://192.168.1.1:8080）才可以登录路由器执行WEB界面管理。这项功能需要重启路由器之后才能生效。</TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>&nbsp;</TD>\n"
        "                          <TD>2、本路由器默认的远端WEB管理IP地址为0.0.0.0，在此默认状态下，来自广域网的任何一台计算机都不能登录路由器执行远端WEB管理，如果您改变了默认的远端WEB管理IP地址（例如改为61.88.88.88），那么广域网中只有具有该指定IP地址（例如61.88.88.88）的计算机才能登录路由器执行远端WEB管理。如果将远端WEB管理IP地址设为255.255.255.255，那么，广域网中所有的计算机都可以登录路由器执行远端WEB管理。</TD>\n"
        "                        </TR>\n"
        "                      </TBODY>\n"
        "                    </TABLE>\n"
        "                    <TABLE class=space cellSpacing=0 cellPadding=0 width=400 \n"
        "            align=center border=0>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD height=25>WEB管理端口：</TD>\n"
        "                          <TD><INPUT class=text id=port maxLength=5 size=6 value="
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%d", bbr->rmanage.wan_port);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "                  name=port></TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD width=136 height=25>远端WEB管理IP地址：</TD>\n"
        "                          <TD width=264><INPUT class=text id=ip maxLength=15 size=16 \n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->rmanage.remote_manage_host);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\" name=ip></TD>\n"
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
        "            width=1></TD>\n"
        "                </TR>\n"
        "                <TR>\n"
        "                  <TD class=tail height=30>&nbsp;\n"
        "                    <INPUT class=button id=Submit type=submit value=\"保 存\" name=Save>\n"
        "&nbsp; </TD>\n"
        "                </TR>\n"
        "                <TR>\n"
        "                  <TD class=hline><IMG height=1 src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/empty.gif\" \n"
        "            width=1></TD>\n"
        "                </TR>\n"
        "              </TBODY>\n"
        "            </TABLE></TD>\n"
        "        </TR>\n"
        "      </TBODY>\n"
        "    </TABLE>\n"
        "  </FORM>\n"
        "</CENTER>\n"
        "<META http-equiv=pragma content=no-cache>\n"
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
} /* _security_remoteweb_csp__ */

static int _security_remoteweb_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}

