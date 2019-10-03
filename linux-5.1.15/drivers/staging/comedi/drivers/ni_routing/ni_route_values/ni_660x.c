// SPDX-License-Identifier: GPL-2.0+
/* vim: set ts=8 sw=8 noet tw=80 nowrap: */
/*
 *  comedi/drivers/ni_routing/ni_route_values/ni_660x.c
 *  Route information for NI_660X boards.
 *
 *  COMEDI - Linux Control and Measurement Device Interface
 *  Copyright (C) 2016 Spencer E. Olson <olsonse@umich.edu>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

/*
 * This file includes a list of all the values of various signals routes
 * available on NI 660x hardware.  In many cases, one does not explicitly make
 * these routes, rather one might indicate that something is used as the source
 * of one particular trigger or another (using *_src=TRIG_EXT).
 *
 * The contents of this file can be generated using the tools in
 * comedi/drivers/ni_routing/tools.  This file also contains specific notes to
 * this family of devices.
 *
 * Please use those tools to help maintain the contents of this file, but be
 * mindful to not lose the notes already made in this file, since these notes
 * are critical to a complete undertsanding of the register values of this
 * family.
 */

#include "../ni_route_values.h"
#include "all.h"

const struct family_route_values ni_660x_route_values = {
	.family = "ni_660x",
	.register_values = {
		/*
		 * destination = {
		 *              source          = register value,
		 *              ...
		 * }
		 */
		[B(NI_PFI(8))] = {
			[B(NI_CtrInternalOutput(7))]	= I(1),
		},
		[B(NI_PFI(10))] = {
			[B(NI_CtrGate(7))]	= I(1),
		},
		[B(NI_PFI(11))] = {
			[B(NI_CtrSource(7))]	= I(1),
		},
		[B(NI_PFI(12))] = {
			[B(NI_CtrInternalOutput(6))]	= I(1),
		},
		[B(NI_PFI(14))] = {
			[B(NI_CtrGate(6))]	= I(1),
		},
		[B(NI_PFI(15))] = {
			[B(NI_CtrSource(6))]	= I(1),
		},
		[B(NI_PFI(16))] = {
			[B(NI_CtrInternalOutput(5))]	= I(1),
		},
		[B(NI_PFI(18))] = {
			[B(NI_CtrGate(5))]	= I(1),
		},
		[B(NI_PFI(19))] = {
			[B(NI_CtrSource(5))]	= I(1),
		},
		[B(NI_PFI(20))] = {
			[B(NI_CtrInternalOutput(4))]	= I(1),
		},
		[B(NI_PFI(22))] = {
			[B(NI_CtrGate(4))]	= I(1),
		},
		[B(NI_PFI(23))] = {
			[B(NI_CtrSource(4))]	= I(1),
		},
		[B(NI_PFI(24))] = {
			[B(NI_CtrInternalOutput(3))]	= I(1),
		},
		[B(NI_PFI(26))] = {
			[B(NI_CtrGate(3))]	= I(1),
		},
		[B(NI_PFI(27))] = {
			[B(NI_CtrSource(3))]	= I(1),
		},
		[B(NI_PFI(28))] = {
			[B(NI_CtrInternalOutput(2))]	= I(1),
		},
		[B(NI_PFI(30))] = {
			[B(NI_CtrGate(2))]	= I(1),
		},
		[B(NI_PFI(31))] = {
			[B(NI_CtrSource(2))]	= I(1),
		},
		[B(NI_PFI(32))] = {
			[B(NI_CtrInternalOutput(1))]	= I(1),
		},
		[B(NI_PFI(34))] = {
			[B(NI_CtrGate(1))]	= I(1),
		},
		[B(NI_PFI(35))] = {
			[B(NI_CtrSource(1))]	= I(1),
		},
		[B(NI_PFI(36))] = {
			[B(NI_CtrInternalOutput(0))]	= I(1),
		},
		[B(NI_PFI(38))] = {
			[B(NI_CtrGate(0))]	= I(1),
		},
		[B(NI_PFI(39))] = {
			[B(NI_CtrSource(0))]	= I(1),
		},
		[B(NI_CtrSource(0))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2 /* or 1 */),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(1))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(1))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3 /* or 1 */),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(2))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(2))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4 /* or 1 */),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(3))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(3))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5 /* or 1 */),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(4))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(4))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6 /* or 1 */),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(5))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(5))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7 /* or 1 */),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(6))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(6))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9),
			[B(NI_PFI(15))]	= U(8 /* or 1 */),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(7))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrSource(7))] = {
			/* These are not currently implemented in ni modules */
			[B(NI_PFI(11))]	= U(9 /* or 1 */),
			[B(NI_PFI(15))]	= U(8),
			[B(NI_PFI(19))]	= U(7),
			[B(NI_PFI(23))]	= U(6),
			[B(NI_PFI(27))]	= U(5),
			[B(NI_PFI(31))]	= U(4),
			[B(NI_PFI(35))]	= U(3),
			[B(NI_PFI(39))]	= U(2),
			[B(TRIGGER_LINE(0))]	= U(11),
			[B(TRIGGER_LINE(1))]	= U(12),
			[B(TRIGGER_LINE(2))]	= U(13),
			[B(TRIGGER_LINE(3))]	= U(14),
			[B(TRIGGER_LINE(4))]	= U(15),
			[B(TRIGGER_LINE(5))]	= U(16),
			[B(TRIGGER_LINE(6))]	= U(17),
			[B(NI_CtrGate(0))]	= U(10),
			[B(NI_20MHzTimebase)]	= U(0),
			[B(NI_80MHzTimebase)]	= U(30),
			[B(NI_100kHzTimebase)]	= U(18),
			[B(NI_LogicLow)]	= U(31),
		},
		[B(NI_CtrGate(0))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2 /* or 1 */),
			[B(NI_PFI(39))]	= I(0),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(1))]	= I(10),
			[B(NI_CtrInternalOutput(1))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(1))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3 /* or 1 */),
			[B(NI_PFI(35))]	= I(0),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(2))]	= I(10),
			[B(NI_CtrInternalOutput(2))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(2))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4 /* or 1 */),
			[B(NI_PFI(31))]	= I(0),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(3))]	= I(10),
			[B(NI_CtrInternalOutput(3))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(3))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5 /* or 1 */),
			[B(NI_PFI(27))]	= I(0),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(4))]	= I(10),
			[B(NI_CtrInternalOutput(4))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(4))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6 /* or 1 */),
			[B(NI_PFI(23))]	= I(0),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(5))]	= I(10),
			[B(NI_CtrInternalOutput(5))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(5))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7 /* or 1 */),
			[B(NI_PFI(19))]	= I(0),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(6))]	= I(10),
			[B(NI_CtrInternalOutput(6))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(6))] = {
			[B(NI_PFI(10))]	= I(9),
			[B(NI_PFI(14))]	= I(8 /* or 1 */),
			[B(NI_PFI(15))]	= I(0),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(7))]	= I(10),
			[B(NI_CtrInternalOutput(7))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrGate(7))] = {
			[B(NI_PFI(10))]	= I(9 /* or 1 */),
			[B(NI_PFI(11))]	= I(0),
			[B(NI_PFI(14))]	= I(8),
			[B(NI_PFI(18))]	= I(7),
			[B(NI_PFI(22))]	= I(6),
			[B(NI_PFI(26))]	= I(5),
			[B(NI_PFI(30))]	= I(4),
			[B(NI_PFI(34))]	= I(3),
			[B(NI_PFI(38))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(0))]	= I(10),
			[B(NI_CtrInternalOutput(0))]	= I(20),
			[B(NI_LogicLow)]	= I(31 /* or 30 */),
		},
		[B(NI_CtrAux(0))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2 /* or 1 */),
			[B(NI_PFI(39))]	= I(0),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(1))]	= I(10),
			[B(NI_CtrGate(1))]	= I(30),
			[B(NI_CtrInternalOutput(1))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(1))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3 /* or 1 */),
			[B(NI_PFI(35))]	= I(0),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(2))]	= I(10),
			[B(NI_CtrGate(2))]	= I(30),
			[B(NI_CtrInternalOutput(2))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(2))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4 /* or 1 */),
			[B(NI_PFI(31))]	= I(0),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(3))]	= I(10),
			[B(NI_CtrGate(3))]	= I(30),
			[B(NI_CtrInternalOutput(3))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(3))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5 /* or 1 */),
			[B(NI_PFI(27))]	= I(0),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(4))]	= I(10),
			[B(NI_CtrGate(4))]	= I(30),
			[B(NI_CtrInternalOutput(4))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(4))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6 /* or 1 */),
			[B(NI_PFI(23))]	= I(0),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(5))]	= I(10),
			[B(NI_CtrGate(5))]	= I(30),
			[B(NI_CtrInternalOutput(5))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(5))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7 /* or 1 */),
			[B(NI_PFI(19))]	= I(0),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(6))]	= I(10),
			[B(NI_CtrGate(6))]	= I(30),
			[B(NI_CtrInternalOutput(6))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(6))] = {
			[B(NI_PFI(9))]	= I(9),
			[B(NI_PFI(13))]	= I(8 /* or 1 */),
			[B(NI_PFI(15))]	= I(0),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(7))]	= I(10),
			[B(NI_CtrGate(7))]	= I(30),
			[B(NI_CtrInternalOutput(7))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
		[B(NI_CtrAux(7))] = {
			[B(NI_PFI(9))]	= I(9 /* or 1 */),
			[B(NI_PFI(11))]	= I(0),
			[B(NI_PFI(13))]	= I(8),
			[B(NI_PFI(17))]	= I(7),
			[B(NI_PFI(21))]	= I(6),
			[B(NI_PFI(25))]	= I(5),
			[B(NI_PFI(29))]	= I(4),
			[B(NI_PFI(33))]	= I(3),
			[B(NI_PFI(37))]	= I(2),
			[B(TRIGGER_LINE(0))]	= I(11),
			[B(TRIGGER_LINE(1))]	= I(12),
			[B(TRIGGER_LINE(2))]	= I(13),
			[B(TRIGGER_LINE(3))]	= I(14),
			[B(TRIGGER_LINE(4))]	= I(15),
			[B(TRIGGER_LINE(5))]	= I(16),
			[B(TRIGGER_LINE(6))]	= I(17),
			[B(NI_CtrSource(0))]	= I(10),
			[B(NI_CtrGate(0))]	= I(30),
			[B(NI_CtrInternalOutput(0))]	= I(20),
			[B(NI_LogicLow)]	= I(31),
		},
	},
};
