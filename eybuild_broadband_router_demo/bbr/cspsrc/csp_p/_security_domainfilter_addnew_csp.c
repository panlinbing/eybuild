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

static int _security_domainfilter_addnew_csp___mime_header(void * __ebfp);

int _security_domainfilter_addnew_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "domainfilter_addnew.csp";
    char * __page_path = "/security/";
    char * __page_fullname = "/security/domainfilter_addnew.csp";
/** DECLARE **/

/** ON_BEGIN **/

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_security_domainfilter_addnew_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "<HTML>\n"
        "<HEAD>\n"
        "<TITLE>domainfilter</TITLE>\n"
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
        "<STYLE type=text/css>\n"
        "A.tp3:visited {\n"
        "	COLOR: #0000ff\n"
        "}\n"
        "A.tp3:link {\n"
        "	COLOR: #0000ff\n"
        "}\n"
        "</STYLE>\n"
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
        "function doAll(val){if(val==\"DelAll\"){if(!confirm(\"您确认要删除当前所有的条目吗？\")) return;} location.href=\"/userRpm/DomainFilterRpm.htm\?doAll=\"+val;}\n"
        "function doAdd(nPage){location.href=\"/userRpm/DomainFilterRpm.htm\?Add=Add&Page=\"+nPage;}\n"
        "function doPage(nPage){location.href=\"/userRpm/DomainFilterRpm.htm\?Page=\"+nPage;}\n"
        "function ResetStatus(strInfo){window.status=strInfo;return true;}\n"
        "function doBack(nPage){location.href=\"/userRpm/DomainFilterRpm.htm\?Page=\"+nPage;}function is_domain(domain_string){\n"
        "var c; var ch = \"-.ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\";\n"
        "for(var i = 0; i < domain_string.length; i++){\n"
        "c = domain_string.charAt(i);\n"
        "if(ch.indexOf(c) == -1)\n"
        "return false;} return true;}\n"
        "function doSubmit(){\n"
        "var i;\n"
        "var domain = document.forms[0].domain;\n"
        "if(domain.value != \"\"){\n"
        "if(!is_domain(domain.value)){\n"
        "alert(\"域名输入含有非法字符，请重新输入！\");\n"
        "var element = domain;\n"
        "if(element){element.focus();element.select();}return false;} }}\n"
        "//--></SCRIPT>\n"
        "</HEAD>\n"
        "<BODY>\n"
        "<CENTER>\n"
        "  <FORM action=/userRpm/DomainFilterRpm.htm encType=multipart/form-data method=get \n"
        "onsubmit=\"return doSubmit();\">\n"
        "    <TABLE border=0 cellPadding=0 cellSpacing=0 width=502>\n"
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
        "          <TD align=left class=title vAlign=center width=495>域名过滤</TD>\n"
        "        </TR>\n"
        "        <TR>\n"
        "          <TD colSpan=2><TABLE border=0 cellPadding=0 cellSpacing=0 width=502>\n"
        "              <TBODY>\n"
        "                <TR>\n"
        "                  <TD class=vline rowSpan=15><BR></TD>\n"
        "                  <TD width=500><TABLE align=center border=0 cellPadding=0 cellSpacing=0 class=space \n"
        "            width=420>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD>本页通过域名过滤来限制局域网中计算机对指定的广域网网站的访问。</TD>\n"
        "                        </TR>\n"
        "                      </TBODY>\n"
        "                    </TABLE>\n"
        "                    <TABLE align=center border=0 cellPadding=4 cellSpacing=0 class=space \n"
        "            width=420>\n"
        "                      <TBODY>\n"
        "                        <TR>\n"
        "                          <TD>域&nbsp;&nbsp;&nbsp;名：</TD>\n"
        "                          <TD><INPUT class=textspecial maxLength=30 name=domain \n"
        "                size=32></TD>\n"
        "                        </TR>\n"
        "                        <TR>\n"
        "                          <TD>状&nbsp;&nbsp;&nbsp;态：</TD>\n"
        "                          <TD><SELECT class=list name=State size=1>\n"
        "                              <OPTION \n"
        "                    value=0>失效&nbsp;</OPTION>\n"
        "                              <OPTION selected \n"
        "                    value=1>生效&nbsp;</OPTION>\n"
        "                            </SELECT></TD>\n"
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
        "                    <INPUT name=Changed type=hidden \n"
        "            value=FALSE>\n"
        "                    <INPUT name=SelIndex type=hidden value=0>\n"
        "                    <INPUT \n"
        "            name=Page type=hidden value=1>\n"
        "&nbsp;&nbsp;\n"
        "                    <INPUT class=button name=Save type=submit value=\"保 存\">\n"
        "&nbsp;\n"
        "                    <INPUT class=button name=Back onclick=doBack(1); type=button value=\"返 回\">\n"
        "                  </TD>\n"
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
} /* _security_domainfilter_addnew_csp__ */

static int _security_domainfilter_addnew_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}

