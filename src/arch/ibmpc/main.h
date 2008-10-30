/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:   src/arch/ibmpc/main.h                                        *
 * Created:     2001-05-01 by Hampa Hug <hampa@hampa.ch>                     *
 * Copyright:   (C) 1996-2008 Hampa Hug <hampa@hampa.ch>                     *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id$ */


#ifndef PCE_IBMPC_MAIN_H
#define PCE_IBMPC_MAIN_H 1


#include <config.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>

#ifdef HAVE_LIMITS_H
#include <limits.h>
#endif

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif


struct ibmpc_t;


extern const char *par_terminal;
extern const char *par_video;
extern const char *par_cpu;
extern unsigned   par_speed;


#include <lib/brkpt.h>
#include <lib/cmd.h>
#include <lib/console.h>
#include <lib/log.h>
#include <lib/hexdump.h>
#include <lib/inidsk.h>
#include <lib/iniram.h>
#include <lib/ihex.h>
#include <lib/load.h>
#include <lib/monitor.h>
#include <lib/msg.h>
#include <lib/sysdep.h>

#include <cpu/e8086/e8086.h>
#include <chipset/82xx/e8237.h>
#include <chipset/82xx/e8250.h>
#include <chipset/82xx/e8253.h>
#include <chipset/82xx/e8255.h>
#include <chipset/82xx/e8259.h>

#include <libini/libini.h>

#include <terminal/terminal.h>

#include <devices/memory.h>
#include <devices/nvram.h>
#include <devices/parport.h>
#include <devices/serport.h>

#include <devices/video/video.h>
#include <devices/video/mda.h>
#include <devices/video/hgc.h>
#include <devices/video/cga.h>
#include <devices/video/ega.h>
#include <devices/video/vga.h>

#include <devices/block/block.h>
#include <devices/block/blkcow.h>
#include <devices/block/blkdosem.h>
#include <devices/block/blkpart.h>
#include <devices/block/blkpce.h>
#include <devices/block/blkram.h>
#include <devices/block/blkraw.h>

#include "util.h"
#include "int13.h"
#include "mouse.h"
#include "ems.h"
#include "xms.h"
#include "ibmpc.h"
#include "hook.h"
#include "keyboard.h"
#include "msg.h"


extern monitor_t par_mon;
extern ibmpc_t   *par_pc;


#endif
