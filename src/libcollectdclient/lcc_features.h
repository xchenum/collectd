/**
 * libcollectdclient - src/libcollectdclient/lcc_features.h
 * Copyright (C) 2009  Sebastian Harl
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; only version 2 of the License is applicable.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 * Authors:
 *   Sebastian tokkee Harl <sh at tokkee.org>
 **/

#ifndef LIBCOLLECTD_LCC_FEATURES_H
#define LIBCOLLECTD_LCC_FEATURES_H 1

#ifdef __cplusplus
# define LCC_BEGIN_DECLS extern "C" {
# define LCC_END_DECLS   }
#else
# define LCC_BEGIN_DECLS
# define LCC_END_DECLS
#endif

#define LCC_API_VERSION 0

#define LCC_VERSION_MAJOR 4
#define LCC_VERSION_MINOR 10
#define LCC_VERSION_PATCH 7

#define LCC_VERSION_EXTRA ""

#define LCC_VERSION_STRING "4.10.7"

#define LCC_VERSION_ENCODE(major, minor, patch) \
	((major) * 10000 + (minor) * 100 + (patch))

#define LCC_VERSION \
	LCC_VERSION_ENCODE(LCC_VERSION_MAJOR, LCC_VERSION_MINOR, LCC_VERSION_PATCH)

LCC_BEGIN_DECLS

unsigned int lcc_version (void);

const char *lcc_version_string (void);

const char *lcc_version_extra (void);

LCC_END_DECLS

#endif /* ! LIBCOLLECTD_LCC_FEATURES_H */

/* vim: set sw=4 ts=4 tw=78 noexpandtab : */

