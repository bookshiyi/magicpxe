/*
 * @Description: 
 * @Date: 2021-12-11 14:54:04
 * @LastEditors: CK.Zh
 * @LastEditTime: 2021-12-18 21:02:18
 * @FilePath: /magicipxe/src/config/branding.h
 */
#ifndef CONFIG_BRANDING_H
#define CONFIG_BRANDING_H

/** @file
 *
 * Branding configuration
 *
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#include <config/defaults.h>

/*
 * Branding
 *
 * Vendors may use these strings to add their own branding to iPXE.
 * PRODUCT_NAME is displayed prior to any iPXE branding in startup
 * messages, and PRODUCT_SHORT_NAME is used where a brief product
 * label is required (e.g. in BIOS boot selection menus).
 *
 * To minimise end-user confusion, it's probably a good idea to either
 * make PRODUCT_SHORT_NAME a substring of PRODUCT_NAME or leave it as
 * "iPXE".
 *
 */
#define PRODUCT_NAME "Magic PXE client  "
#define PRODUCT_SHORT_NAME "MagicPXE"
#define PRODUCT_URI "http://ipxe.org"

/*
 * Tag line
 *
 * If your PRODUCT_SHORT_NAME is longer than the four characters used
 * by "iPXE", then the standard tag line "Open Source Network Boot
 * Firmware" is unlikely to fit neatly onto the screen.
 */
#define PRODUCT_TAG_LINE "Open Source Network Boot Firmware"

/*
 * Error messages
 *
 * iPXE error messages comprise a summary error message
 * (e.g. "Permission denied") and a 32-bit error number.  This number
 * is incorporated into an error URI such as
 *
 *   "No such file or directory (http://ipxe.org/2d0c613b)"
 *
 * or
 *
 *   "Operation not supported (http://ipxe.org/3c092003)"
 *
 * Users may browse to the URI within the error message, which is
 * provided by a database running on the iPXE web site
 * (http://ipxe.org).  This database provides details for all possible
 * errors generated by iPXE, including:
 *
 * - the detailed error message (e.g. "Not an OCSP signing
 *   certificate") to complement the summary message (e.g. "Permission
 *   denied") which is compiled into the iPXE binary.
 *
 * - an instruction to the user to upgrade, if the error cannot be
 *   generated by the latest version of iPXE.
 *
 * - hints on how to fix the error (e.g. "This error indicates that
 *   the file was not found on the TFTP server.  Check that you can
 *   retrieve the file using an alternative TFTP client, such as
 *   tftp-hpa on Linux.")
 *
 * - details of which source file within the iPXE codebase generated
 *   the error.
 *
 * - a direct link to the line(s) of code which generated the error.
 *
 * If you have a customer support team and would like your customers
 * to contact your support team for all problems, instead of using the
 * existing support infrastructure provided by http://ipxe.org, then
 * you may define a custom URI to be included within error messages.
 *
 * Note that the custom URI is a printf() format string which must
 * include a format specifier for the 32-bit error number.
 */
#define PRODUCT_ERROR_URI "http://ipxe.org/%08x"

/*
 * Command help messages
 *
 * iPXE command help messages include a URI constructed from the
 * command name, such as
 *
 *   "See http://ipxe.org/cmd/vcreate for further information"
 *
 * The iPXE web site includes documentation for the commands provided
 * by the iPXE shell, including:
 *
 * - details of the command syntax (e.g. "vcreate --tag <tag>
 *   [--priority <priority>] <trunk interface>").
 *
 * - example usages of the command (e.g. "vcreate --tag 123 net0")
 *
 * - a formal description of the command (e.g. "Create a VLAN network
 *   interface on an existing trunk network interface. The new network
 *   interface will be named by appending a hyphen and the VLAN tag
 *   value to the trunk network interface name.")
 *
 * - details of the possible exit statuses from the command.
 *
 * - links to documentation for related commands (e.g. "vdestroy")
 *
 * - links to documentation for relevant build options (e.g. "VLAN_CMD").
 *
 * - general hints and tips on using the command.
 *
 * If you want to provide your own documentation for all of the
 * commands provided by the iPXE shell, rather than using the existing
 * support infrastructure provided by http://ipxe.org, then you may
 * define a custom URI to be included within command help messages.
 *
 * Note that the custom URI is a printf() format string which must
 * include a format specifier for the command name.
 *
 * [ Please also note that the existing documentation is licensed
 *   under Creative Commons terms which require attribution to the
 *   iPXE project and prohibit the alteration or removal of any
 *   references to "iPXE". ]
 */
#define PRODUCT_COMMAND_URI "http://ipxe.org/cmd/%s"

/*
 * Setting help messages
 *
 * iPXE setting help messages include a URI constructed from the
 * setting name, such as
 *
 *   "http://ipxe.org/cfg/initiator-iqn"
 *
 * The iPXE web site includes documentation for the settings used by
 * iPXE, including:
 *
 * - details of the corresponding DHCP option number.
 *
 * - details of the corresponding ISC dhcpd option name.
 *
 * - examples of using the setting from the iPXE command line, or in
 *   iPXE scripts.
 *
 * - examples of configuring the setting via a DHCP server.
 *
 * - a formal description of the setting.
 *
 * - links to documentation for related settings.
 *
 * - links to documentation for relevant build options.
 *
 * - general notes about the setting.
 *
 * If you want to provide your own documentation for all of the
 * settings used by iPXE, rather than using the existing support
 * infrastructure provided by http://ipxe.org, then you may define a
 * custom URI to be included within setting help messages.
 *
 * Note that the custom URI is a printf() format string which must
 * include a format specifier for the setting name.
 *
 * [ Please also note that the existing documentation is licensed
 *   under Creative Commons terms which require attribution to the
 *   iPXE project and prohibit the alteration or removal of any
 *   references to "iPXE". ]
 */
#define PRODUCT_SETTING_URI "http://ipxe.org/cfg/%s"

#include <config/local/branding.h>

#endif /* CONFIG_BRANDING_H */
