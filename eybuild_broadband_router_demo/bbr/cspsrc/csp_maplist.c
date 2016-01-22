/* NOTE: DO NOT EDIT THIS FILE,
 * this file is created by tool (CSP/eybuild 1.0.3) automaticly,
 * build at: Mon Oct 09 23:31:48 2006
 */

#include <eblib.h>
#include "csp_p/_main_csp.c"
#include "csp_p/_menu_csp.c"
#include "csp_p/_login_csp.c"
#include "csp_p/_basic_guide_csp.c"
#include "csp_p/_basic_logo_csp.c"
#include "csp_p/_basic_status_csp.c"
#include "csp_p/_basic_banner_csp.c"
#include "csp_p/_basic_bottom_csp.c"
#include "csp_p/_security_domainfilter_csp.c"
#include "csp_p/_security_domainfilter_addnew_csp.c"
#include "csp_p/_security_firewall_csp.c"
#include "csp_p/_security_macfilter_csp.c"
#include "csp_p/_security_ping_csp.c"
#include "csp_p/_security_remoteweb_csp.c"
#include "csp_p/_network_lan_setting_csp.c"
#include "csp_p/_network_mac_setting_csp.c"
#include "csp_p/_network_wan_setting_csp.c"
#include "csp_p/_network_pppoe_more_csp.c"
#include "csp_p/_route_static_csp.c"
#include "csp_p/_system_log_csp.c"
#include "csp_p/_system_restore_csp.c"
#include "csp_p/_system_account_csp.c"
#include "csp_p/_system_reboot_csp.c"
#include "csp_p/_system_upgrade_csp.c"
#include "csp_p/_nat_dmz_csp.c"
#include "csp_p/_nat_virtualserver_csp.c"
#include "csp_p/_nat_special_app_csp.c"
#include "csp_p/_nat_upnp_csp.c"
#include "csp_p/_dhcp_clients_csp.c"
#include "csp_p/_dhcp_server_csp.c"
#include "csp_p/_dhcp_fixmap_csp.c"


EB_CSP_MAPFILE csp_maplist[] = {
    {"/basic/banner.csp", _basic_banner_csp__, 0x1000, 0x10001006}, 
    {"/basic/bottom.csp", _basic_bottom_csp__, 0x1000, 0x10001007}, 
    {"/basic/guide.csp", _basic_guide_csp__, 0x1000, 0x10001003}, 
    {"/basic/logo.csp", _basic_logo_csp__, 0x1000, 0x10001004}, 
    {"/basic/status.csp", _basic_status_csp__, 0x1000, 0x10001005}, 
    {"/dhcp/clients.csp", _dhcp_clients_csp__, 0x1000, 0x1000101C}, 
    {"/dhcp/fixmap.csp", _dhcp_fixmap_csp__, 0x1000, 0x1000101E}, 
    {"/dhcp/server.csp", _dhcp_server_csp__, 0x1000, 0x1000101D}, 
    {"/login.csp", _login_csp__, 0x1000, 0x10001002}, 
    {"/main.csp", _main_csp__, 0x1000, 0x10001000}, 
    {"/menu.csp", _menu_csp__, 0x1000, 0x10001001}, 
    {"/nat/dmz.csp", _nat_dmz_csp__, 0x1000, 0x10001018}, 
    {"/nat/special_app.csp", _nat_special_app_csp__, 0x1000, 0x1000101A}, 
    {"/nat/upnp.csp", _nat_upnp_csp__, 0x1000, 0x1000101B}, 
    {"/nat/virtualserver.csp", _nat_virtualserver_csp__, 0x1000, 0x10001019}, 
    {"/network/lan_setting.csp", _network_lan_setting_csp__, 0x1000, 0x1000100E}, 
    {"/network/mac_setting.csp", _network_mac_setting_csp__, 0x1000, 0x1000100F}, 
    {"/network/pppoe_more.csp", _network_pppoe_more_csp__, 0x1000, 0x10001011}, 
    {"/network/wan_setting.csp", _network_wan_setting_csp__, 0x1000, 0x10001010}, 
    {"/route/static.csp", _route_static_csp__, 0x1000, 0x10001012}, 
    {"/security/domainfilter.csp", _security_domainfilter_csp__, 0x1000, 0x10001008}, 
    {"/security/domainfilter_addnew.csp", _security_domainfilter_addnew_csp__, 0x1000, 0x10001009}, 
    {"/security/firewall.csp", _security_firewall_csp__, 0x1000, 0x1000100A}, 
    {"/security/macfilter.csp", _security_macfilter_csp__, 0x1000, 0x1000100B}, 
    {"/security/ping.csp", _security_ping_csp__, 0x1000, 0x1000100C}, 
    {"/security/remoteweb.csp", _security_remoteweb_csp__, 0x1000, 0x1000100D}, 
    {"/system/account.csp", _system_account_csp__, 0x1000, 0x10001015}, 
    {"/system/log.csp", _system_log_csp__, 0x1000, 0x10001013}, 
    {"/system/reboot.csp", _system_reboot_csp__, 0x1000, 0x10001016}, 
    {"/system/restore.csp", _system_restore_csp__, 0x1000, 0x10001014}, 
    {"/system/upgrade.csp", _system_upgrade_csp__, 0x1000, 0x10001017}, 
    {NULL, NULL, 0, 0}, 
};


