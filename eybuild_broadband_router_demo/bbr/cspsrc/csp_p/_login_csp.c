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
#include "_login_csp.h"

/** GLOBAL **/

static int _login_csp___mime_header(void * __ebfp);

int _login_csp__ (int __calldepth, void * __handle, void * __ebfp)
{
    int __ret = OK;
    char * __page_name = "login.csp";
    char * __page_path = "/";
    char * __page_fullname = "/login.csp";
/** DECLARE **/

/** ON_BEGIN **/
    BROADBAND_ROUTER 	bbr[1];
    char				errmsg[256] = "Please login";
    char *				puser = getCookie("username");
    char *				pid   = getCookie("session_id");
    char *				pname = G("usrname");
    char *				ppswd = G("passwd");
    
    /* load first */
    load_bbr(bbr, errmsg);
    /* have been login */
    if (	!isblankstr(puser) && !isblankstr(pid) &&
    !strcmp(puser, bbr->account.user) &&
    !strcmp(pid, bbr->account.session_id))
    {
    redirect("%s", get_filename(getScriptName())); 	/* redirect to this page */
    return OK;
    }
    
    /* save user submit */
    if (!isblankstr(G("login")))
    {
    if (!strcmp(pname, bbr->account.user) &&
    !strcmp(ppswd, bbr->account.passwd))
    {
    #if 1
    /* don't set expire */
    setcookie("username", pname, NULL);
    setcookie("session_id", bbr->account.session_id, NULL);
    #else
    /* set expire time 1 day */
    setcookie("username", pname, time(NULL)+3600*24, NULL);
    setcookie("session_id", bbr->account.session_id, time(NULL)+3600*24, NULL);
    #endif
    redirect("%s", get_filename(getScriptName())); 	/* redirect to this page */
    return OK;
    }
    
    if (isblankstr(ppswd))
    sprintf(errmsg, "�������û�����!");
    else
    sprintf(errmsg, "�û������ȷ!");
    }
    
    /* default user account: user:user, auto filled into
    * for release version please remove this part
    */
    if (!strcmp("user", bbr->account.user) &&
    !strcmp("user", bbr->account.passwd))
    {
    ppswd = "user";
    }

    if (__calldepth==MAX_CALL_DEPTH)
        __ret=_login_csp___mime_header(__ebfp);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "<html>\n"
        "<head>\n"
        "<META content=no-cache http-equiv=pragma>\n"
        "<META content=\"text/html; charset=gb2312\" http-equiv=Content-Type>\n"
        "<META content=\"wed, 26 Feb 1997 08:21:57 GMT\" http-equiv=expires>\n"
        "<title>BBR ��¼("
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", BBR_VERSION);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        ")</title>\n"
        "<style>\n"
        "<!-- \n"
        "p, td, div, b {	font-size: 11pt; }\n"
        "p {}\n"
        "td {height: 35px;}\n"
        "div { color: red }\n"
        "#title {font-size: 16px; color: #663300; width: 80px; }\n"
        "#text { width: 150px; }\n"
        "-->\n"
        "</style>\n"
        "<script language=JavaScript><!-- \n"
        "if (top.location !== self.location){top.location.href=self.location;}\n"
        "function set_focus() {\n"
        "	document.forms[0].elements[1].focus();\n"
        "}\n"
        "-->\n"
        "</script>\n"
        "</head>\n"
        "<body onload=\"set_focus();\">\n"
        "<p style=\"margin-top: 80px\">\n"
        "<center>\n"
        "<form action="
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", thisCgiPrefix());
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        " method=post>\n"
        "  <table width=300 border=1 cellpadding=\"2\" cellspacing=\"0\" bordercolor=\"#EA8A1C\">\n"
        "    <tr>\n"
        "      <td height=40 colspan=2 bgcolor=\"#FFDA00\"><strong>��¼�� Broadband Router:</strong></td>\n"
        "    <tr>\n"
        "      <td id=\"title\">�� ����</td>\n"
        "      <td height=30><input id=\"text\" type=text name=usrname size=12 value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", bbr->account.user);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\"></td>\n"
        "    <tr>\n"
        "      <td id=\"title\">�� �</td>\n"
        "      <td height=30><input id=\"text\" type=password name=passwd size=12 value=\""
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", ppswd);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "\"></td>\n"
        "    <tr>\n"
        "      <td colspan=2 align=center><input type=submit name=login value=\"�� ��\"></td>\n"
        "  </table>\n"
        " </FORM>\n"
        );
    goto_ERROR;

    if ('\0' != errmsg[0]) {
    __ret=(int)ebBufStringAdd(__ebfp, 
        "<div>"
        );
    goto_ERROR;

    __ret = (int)ebprintf(__ebfp, "%s", errmsg);
    goto_ERROR;

    __ret=(int)ebBufStringAdd(__ebfp, 
        "</div>\n"
        );
    goto_ERROR;

    }
    __ret=(int)ebBufStringAdd(__ebfp, 
        "<p style=\"margin-top: 30px\">(���� http://www.eybuild.com)</p>\n"
        "</center>\n"
        "</body>\n"
        "</html>\n"
        );

    goto_ERROR;

/** ON_END **/
ON_END:

    if ((__calldepth==MAX_CALL_DEPTH) && ERROR == ebBufFlush(__ebfp))
        return ERROR;

    return __ret;

    EB_REMOVE_NOUSED_WARNING();
} /* _login_csp__ */

static int _login_csp___mime_header(void * __ebfp) 
{
    return ebprintf(__ebfp, "Content-Type: text/html\n\n");
}
