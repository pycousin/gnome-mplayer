/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * gm_audio.h
 * Copyright (C) Kevin DeKorte 2006 <kdekorte@gmail.com>
 * 
 * gm_audio.h is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * gm_audio.h is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with playlist.c.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifndef __GM_AUDIO_H__
#define __GM_AUDIO_H__

typedef enum {
    AUDIO_TYPE_SOFTVOL,	// use mplayer software volume control for non-alsa and non-pulse devices
    AUDIO_TYPE_ALSA,
    AUDIO_TYPE_PULSE
} GmAudioType;

typedef struct _AudioDevice {
	gchar *description;    // use this as a key to look up the information 
	GmAudioType type;
	gint alsa_card;
	gint alsa_device;
	gchar *alsa_mixer;     // this is not looked up
	gint pulse_index;
	gchar *mplayer_ao;
} AudioDevice;


#ifdef __cplusplus
extern "C" {
#endif

// prototypes go here


	
#ifdef __cplusplus
}
#endif

#endif
