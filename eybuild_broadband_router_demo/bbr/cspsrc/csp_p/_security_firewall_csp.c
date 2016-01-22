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
#include "_security_firewall_csp.h"

/** GLOBAL **/

static int _security_firewall_csp___mime_header(void * __ebfp);

int _security_firewall_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "firewall.csp";
    char * __page_path = "/security/";
    char * __page_fullname = "/security/firewall.csp";
/** DECLARE **/

/** ON_BEGIN **/
    BROADBAND_ROUTER 	bbr[1];
    char				errmsg[256] = "";
    
    /* load first */
    load_bbr(bbr, errmsg);
    
    /* save user submit */
    if (!isblankstr(G("Save"))) {
    bbr->ip_filter.firewall_enable = atoi(G("FireWall"));
    bbr->ip_filter.ip_filter_enable = atoi(G("IpFilt"));
    bbr->ip_filter.ip_filter_allow_all = atoi(G("IpRule"));
    bbr->ip_filter.domain_filter_enable = atoi(G("DomainFilt"));
    bbr->ip_filter.mac_filter_enable = atoi(G("MacFilt"));
    bbr->ip_filter.mac_filter_allow_added = atoi(G("MacRule"));
    
    save_bbr(bbr, errmsg);
    }
    

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_security_firewall_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "<HTML>\n"
        "<HEAD>\n"
        "<TITLE>wanipfilter</TITLE>\n"
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
        "<SCRIPT language=JavaScript>\n"
        "<!-- \n"
        "if(window.parent == window){window.location.href=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", getScriptName());
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\";}\n"
        "function Click(){ window.event.returnValue=false;}\n"
        "document.oncontextmenu=Click;\n"
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
        "    <TABLE cellSpacing=0 cellPadding=0 width=580 border=0>\n"
        "      <TBODY>\n"
        "        <TR>\n"
        "          <TD class=title width=7><IMG height=24 src=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", romPrefix(NULL));
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "/rom/arc.gif\" \n"
        "      width=7></TD>\n"
        "          <TD class=title vAlign=center align=left width=573>防火墙设置</TD>\n"
        "        </TR>\n"
        "        <TR>\n"
        "          <TD colSpan=2><TABLE cellSpacing=0 cellPadding=0 width=580 border=0>\n"
        "              <TBODY>\n"
        "                <TR>\n"
        "                  <TD class=vline rowSpan=15><BR></TD>\n"
        "                  <TD width=578><TABLE class=space cellSpacing=0 cellPadding=0 width=520 \n"
        "            align=center border=0>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD>本页对防火墙的各个过滤功能的开启与关闭进行设置。只有防火墙的总开关是开启的时候，后续的“IP地址过滤”、“域名过滤”、“MAC地址过滤”、“WAN口Ping”才能够生效，反之，则失效。</TD>\n"
        "                        </TR>\n"
        "                      </TBODY>\n"
        "                    </TABLE>\n"
        "                    <CENTER>\n"
        "                      <TABLE class=space cellPadding=2 width=520 border=0>\n"
        "                        <TBODY>\n"
        "                          <TR>\n"
        "                            <TD width=21>"
        );
    goto_ERROR;

    CHECK_BOX2("FireWall", "1", bbr->ip_filter.firewall_enable, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "</TD>\n"
        "                            <TD width=461>开启防火墙（防火墙的总开关）</TD>\n"
        "                          </TR>\n"
        "                        </TBODY>\n"
        "                      </TABLE>\n"
        "                      <TABLE class=space cellSpacing=0 cellPadding=0 width=520 border=1>\n"
        "                        <TBODY>\n"
        "                          <TR>\n"
        "                            <TD width=520><TABLE cellSpacing=0 cellPadding=0 width=520 border=0>\n"
        "                                <TBODY>\n"
        "                                  <TR>\n"
        "                                    <TD width=520 colSpan=2>"
        );
    goto_ERROR;

    CHECK_BOX2("IpFilt", "1", bbr->ip_filter.ip_filter_enable, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "                                      开启IP地址过滤</TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD>&nbsp;</TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD align=left width=520 colSpan=2><P>&nbsp;&nbsp; 缺省过滤规则</P></TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD align=middle width=40>"
        );
    goto_ERROR;

    RADIO_BOX2("IpRule", "0", bbr->ip_filter.ip_filter_allow_all, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "</TD>\n"
        "                                    <TD width=480>凡是不符合已设IP地址过滤规则的数据包，<FONT \n"
        "                        color=#ff0000>允许</FONT>通过本路由器</TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD align=middle width=40>"
        );
    goto_ERROR;

    RADIO_BOX2("IpRule", "1", bbr->ip_filter.ip_filter_allow_all, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "</TD>\n"
        "                                    <TD width=480>凡是不符合已设IP地址过滤规则的数据包，<FONT \n"
        "                        color=#ff0000>禁止</FONT>通过本路由器</TD>\n"
        "                                  </TR>\n"
        "                                </TBODY>\n"
        "                              </TABLE></TD>\n"
        "                          </TR>\n"
        "                        </TBODY>\n"
        "                      </TABLE>\n"
        "                      <TABLE height=30 cellSpacing=0 cellPadding=0 width=520 border=1>\n"
        "                        <TBODY>\n"
        "                          <TR>\n"
        "                            <TD width=520><TABLE cellSpacing=0 cellPadding=0 width=520 border=0>\n"
        "                                <TBODY>\n"
        "                                  <TR>\n"
        "                                    <TD width=520 colSpan=2>"
        );
    goto_ERROR;

    CHECK_BOX2("DomainFilt", "1", bbr->ip_filter.domain_filter_enable, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "开启域名过滤</TD>\n"
        "                                  </TR>\n"
        "                                </TBODY>\n"
        "                              </TABLE></TD>\n"
        "                          </TR>\n"
        "                        </TBODY>\n"
        "                      </TABLE>\n"
        "                      <TABLE class=space cellSpacing=0 cellPadding=0 width=520 border=1>\n"
        "                        <TBODY>\n"
        "                          <TR>\n"
        "                            <TD width=520><TABLE cellSpacing=0 cellPadding=0 width=520 border=0>\n"
        "                                <TBODY>\n"
        "                                  <TR>\n"
        "                                    <TD width=520 colSpan=2>"
        );
    goto_ERROR;

    CHECK_BOX2("MacFilt", "1", bbr->ip_filter.mac_filter_enable, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "                                      开启MAC地址过滤</TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD width=520 colSpan=2>&nbsp;</TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD align=left width=520 colSpan=2><P>&nbsp;&nbsp; 缺省过滤规则</P></TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD align=middle width=40>"
        );
    goto_ERROR;

    RADIO_BOX2("MacRule", "0", bbr->ip_filter.mac_filter_allow_added, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "</TD>\n"
        "                                    <TD width=480><FONT \n"
        "                        color=#ff0000>仅允许</FONT>已设MAC地址列表中已启用的MAC地址访问Internet</TD>\n"
        "                                  </TR>\n"
        "                                  <TR>\n"
        "                                    <TD vAlign=top align=middle width=40>\n"
        "                                    	"
        );
    goto_ERROR;

    RADIO_BOX2("MacRule", "1", bbr->ip_filter.mac_filter_allow_added, "");
    __ret=(int)ebBufStringAdd(__ebfp, 
        "</TD>\n"
        "                                    <TD width=480><FONT \n"
        "                        color=#ff0000>禁止</FONT>已设MAC地址列表中已启用的MAC地址访问Internet，允许其他MAC地址访问Internet</TD>\n"
        "                                  </TR>\n"
        "                                </TBODY>\n"
        "                              </TABLE></TD>\n"
        "                          </TR>\n"
        "                        </TBODY>\n"
        "                      </TABLE>\n"
        "                    </CENTER></TD>\n"
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
        "                    <INPUT class=button type=submit value=\"保 存\" name=Save>\n"
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
} /* _security_firewall_csp__ */

static int _security_firewall_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}

