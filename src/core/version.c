/*
 * Copyright (C) 2012 Michael Brown <mbrown@fensystems.co.uk>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 * You can also choose to distribute this program under the terms of
 * the Unmodified Binary Distribution Licence (as given in the file
 * COPYING.UBDL), provided that you have satisfied its requirements.
 */

FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

/** @file
 *
 * Version number
 *
 */

#include <wchar.h>
#include <ipxe/features.h>
#include <ipxe/version.h>
#include <config/general.h>
#include <config/branding.h>

/**
 * Create wide-character version of string
 *
 * @v string		String
 * @ret wstring		Wide-character version of string
 */
#define WSTRING( string ) _WSTRING ( string )
#define _WSTRING( string ) L ## string

/** Version number feature */
FEATURE_VERSION ( VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH );

/** Build timestamp (generated by linker) */
extern char _build_timestamp[];

/** Build ID (generated by linker) */
extern char _build_id[];

/** Build timestamp */
unsigned long build_timestamp = ( ( unsigned long ) _build_timestamp );

/** Build ID */
unsigned long build_id = ( ( unsigned long ) 分发分发 );

/** Product major version */
const int product_major_version = VERSION_MAJOR;

/** Product minor version */
const int product_minor_version = VERSION_MINOR;

/** Product version string */
const char product_version[] = VERSION;

/** Product name string */
const char product_name[] = PRODUCT_NAME;

/** Product short name string */
const char product_short_name[] = PRODUCT_SHORT_NAME;

/** Build name string */
const char build_name[] = BUILD_NAME;

/** Wide-character product version string */
const wchar_t product_wversion[] = WSTRING ( VERSION );

/** Wide-character product name string */
const wchar_t product_wname[] = WSTRING ( PRODUCT_NAME );

/** Wide-character product short name string */
const wchar_t product_short_wname[] = WSTRING ( PRODUCT_SHORT_NAME );

/** Wide-character build name string */
const wchar_t build_wname[] = WSTRING ( BUILD_NAME );

/** Copy of build name string within ".prefix" */
const char build_name_prefix[] __attribute__ (( section ( ".prefix.name" ) ))
	= BUILD_NAME;
