/*
 * GPL HEADER START
 *
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 only,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License version 2 for more details (a copy is included
 * in the LICENSE file that accompanied this code).
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; If not, see
 * http://www.gnu.org/licenses/gpl-2.0.html
 *
 * GPL HEADER END
 */
/*
 * Copyright (c) 2007, 2010, Oracle and/or its affiliates. All rights reserved.
 * Use is subject to license terms.
 */
/*
 * This file is part of Lustre, http://www.lustre.org/
 * Lustre is a trademark of Sun Microsystems, Inc.
 *
 * lnet/selftest/timer.h
 *
 * Author: Isaac Huang <isaac@clusterfs.com>
 */
#ifndef __SELFTEST_TIMER_H__
#define __SELFTEST_TIMER_H__

typedef struct {
	struct list_head	stt_list;
	time64_t		stt_expires;
	void			(*stt_func)(void *);
	void			*stt_data;
} stt_timer_t;

void stt_add_timer(stt_timer_t *timer);
int stt_del_timer(stt_timer_t *timer);
int stt_startup(void);
void stt_shutdown(void);

#endif /* __SELFTEST_TIMER_H__ */