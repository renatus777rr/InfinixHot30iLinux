// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2026 faveoled
 */

#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info hot30i_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 720,
	.height = 1612,
	.stride = 4,
	.scale = 2,
	.address = (void *)0x9e000000 
};

static const struct device hot30i_devices[] = {
	{ "simplefb", &hot30i_fb, "fb" },
};

struct board_data board_ops = {
	.name = "infinix-hot30i",
	.ops = {
	},
	.devices = hot30i_devices,
	.num_devices = ARRAY_SIZE(hot30i_devices),
	.quirks = 0
};
