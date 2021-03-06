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
#include "_dhcp_server_csp.h"

/** GLOBAL **/

static int _dhcp_server_csp___mime_header(void * __ebfp);

int _dhcp_server_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "server.csp";
    char * __page_path = "/dhcp/";
    char * __page_fullname = "/dhcp/server.csp";
/** DECLARE **/

/** ON_BEGIN **/
    BROADBAND_ROUTER 	bbr[1];
    char				errmsg[256] = "";
    
    /* load first */
    load_bbr(bbr, errmsg);
    
    /* save user submit */
    if (!isblankstr(G("Save"))) {
    bbr->dhcps.enable = atoi(G("dhcpserver"));
    BUFCPY(bbr->dhcps.pool_start, G("ip1"));
    BUFCPY(bbr->dhcps.pool_end, G("ip2"));
    bbr->dhcps.lease = atoi(G("lease"));
    BUFCPY(bbr->dhcps.default_gateway, G("gateway"));
    BUFCPY(bbr->dhcps.default_dsn, G("domain"));
    BUFCPY(bbr->dhcps.main_dsn_server, G("dnsserver"));
    BUFCPY(bbr->dhcps.backup_dsn_server, G("dnsserver2"));
    
    save_bbr(bbr, errmsg);
    }
    

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_dhcp_server_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\n"
        "<HTML>\n"
        "<HEAD>\n"
        "<TITLE>dhcpserver</TITLE>\n"
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
        "var MINIP = 1;\n"
        "var MAXIP = 254;\n"
        "if(document.forms[0].ip1.value!=\"\"){\n"
        "if(!is_ipaddr(document.forms[0].ip1.value)){\n"
        "var element = document.forms[0].ip1;\n"
        "if(element){\n"
        "element.focus();\n"
        "element.select();}\n"
        "return false;}}\n"
        "if(document.forms[0].ip2.value!=\"\"){\n"
        "if(!is_ipaddr(document.forms[0].ip2.value)){\n"
        "var element = document.forms[0].ip2;\n"
        "if(element){\n"
        "element.focus();\n"
        "element.select();}\n"
        "return false;}}\n"
        "if(document.forms[0].gateway.value!=\"\"){\n"
        "if(!is_gatewayaddr(document.forms[0].gateway.value)){\n"
        "var element = document.forms[0].gateway;\n"
        "if(element){\n"
        "element.focus();element.select();}return false;}}\n"
        "if(!is_domain(document.forms[0].domain.value)){\n"
        "var element = document.forms[0].domain;\n"
        "if(element){element.focus();element.select();}return false;}\n"
        "if(document.forms[0].dnsserver.value != \"\"){\n"
        "if(!is_dnsaddr(document.forms[0].dnsserver.value)){\n"
        "var element = document.forms[0].dnsserver;\n"
        "if(element){element.focus();element.select();}return false;}}\n"
        "if(document.forms[0].dnsserver2.value != \"\"){\n"
        "if(!is_dnsaddr(document.forms[0].dnsserver2.value)){	\n"
        "var element = document.forms[0].dnsserver2;\n"
        "if(element){\n"
        "element.focus();\n"
        "element.select();}\n"
        "return false;}}\n"
        "alert(\"注意：只有在您重启路由器后，您所做的修改才能生效！\");\n"
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
        "          <TD class=title width=7><IMG height=24 \n"
        "		  src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/arc.gif\" width=7></TD>\n"
        "          <TD align=left class=title vAlign=center width=495>DHCP服务</TD>\n"
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
        "                          <TD>本路由器内建有DHCP服务器，有了它，不用您亲自动手，就可以自动将您计算机中复杂的TCP/IP协议参数配置正确。</TD>\n"
        "                        </TR>\n"
        "                      </TBODY>\n"
        "                    </TABLE>\n"
        "                    <TABLE align=center border=0 class=space width=400>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD width=107>DHCP服务器：</TD>\n"
        "                          <TD width=283>"
        );
    goto_ERROR;

    RADIO_BOX2("dhcpserver", "0", bbr->dhcps.enable, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "                            不启用\n"
        "                            "
        );
    goto_ERROR;

    RADIO_BOX2("dhcpserver", "1", bbr->dhcps.enable, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "                            启用 </TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>地址池开始地址：</TD>\n"
        "                          <TD><INPUT class=text maxLength=15 name=ip1 size=15 \n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->dhcps.pool_start);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\"></TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>地址池结束地址：</TD>\n"
        "                          <TD><INPUT class=text maxLength=15 name=ip2 size=15 \n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->dhcps.pool_end);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\"></TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>地址租期：</TD>\n"
        "                          <TD><INPUT class=text maxLength=4 name=lease size=4 \n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%d", bbr->dhcps.lease);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\">\n"
        "&nbsp;分钟（1～2880分钟，缺省为120分钟）</TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>网关：</TD>\n"
        "                          <TD><INPUT class=text maxLength=15 name=gateway size=15\n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->dhcps.default_gateway);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\">\n"
        "                            （可选）</TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>缺省域名：</TD>\n"
        "                          <TD><INPUT class=text id=domain maxLength=30 name=domain size=15\n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->dhcps.default_dsn);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\">\n"
        "                            （可选）</TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>主DNS服务器：</TD>\n"
        "                          <TD><INPUT class=text maxLength=15 name=dnsserver size=15\n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->dhcps.main_dsn_server);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\">\n"
        "                            （可选）</TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>备用DNS服务器：</TD>\n"
        "                          <TD><INPUT class=text maxLength=15 name=dnsserver2 size=15\n"
        "                  value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->dhcps.backup_dsn_server);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\">\n"
        "                            （可选）</TD>\n"
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
        "                    <INPUT class=button id=Submit name=Save onclick=\"return doSubmit();\" type=submit value=\"保 存\">\n"
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
} /* _dhcp_server_csp__ */

static int _dhcp_server_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}

