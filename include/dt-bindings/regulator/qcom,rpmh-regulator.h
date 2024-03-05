/* Copyright (c) 2016-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __QCOM_RPMH_REGULATOR_H
#define __QCOM_RPMH_REGULATOR_H

/* This offset is needed as 0 is considered an invalid voltage. */
#define RPMH_REGULATOR_LEVEL_OFFSET	1

/* These levels may be used for RPMH ARC resource regulators */
#define RPMH_REGULATOR_LEVEL_MIN	(0 + RPMH_REGULATOR_LEVEL_OFFSET)

#define RPMH_REGULATOR_LEVEL_OFF	(0 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_RETENTION	(16 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_MIN_SVS	(48 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_LOW_SVS_D1 (56 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_LOW_SVS	(64 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_LOW_SVS_L1	(80 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_LOW_SVS_L2	(96 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_SVS	(128 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_SVS_L0	(144 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_SVS_L1	(192 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_SVS_L2	(224 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_NOM	(256 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_NOM_L1	(320 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_NOM_L2	(336 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_NOM_L3	(352 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_TURBO	(384 + RPMH_REGULATOR_LEVEL_OFFSET)
#define RPMH_REGULATOR_LEVEL_TURBO_L1	(416 + RPMH_REGULATOR_LEVEL_OFFSET)

#define RPMH_REGULATOR_LEVEL_MAX	(65535 + RPMH_REGULATOR_LEVEL_OFFSET)

/*
 * These set constants may be used as the value for qcom,set of an RPMh
 * resource device.
 */
#define RPMH_REGULATOR_SET_ACTIVE	1
#define RPMH_REGULATOR_SET_SLEEP	2
#define RPMH_REGULATOR_SET_ALL		3

/*
 * These mode constants may be used for qcom,supported-modes and qcom,init-mode
 * properties of an RPMh resource.  Each type of regulator supports a subset of
 * the possible modes.
 *
 * %RPMH_REGULATOR_MODE_PASS:	Pass-through mode in which output is directly
 *				tied to input.  This mode is only supported by
 *				BOB type regulators.
 * %RPMH_REGULATOR_MODE_RET:	Retention mode in which only an extremely small
 *				load current is allowed.  This mode is supported
 *				by LDO and SMPS type regulators.
 * %RPMH_REGULATOR_MODE_LPM:	Low power mode in which a small load current is
 *				allowed.  This mode corresponds to PFM for SMPS
 *				and BOB type regulators.  This mode is supported
 *				by LDO, HFSMPS, BOB, and PMIC4 FTSMPS type
 *				regulators.
 * %RPMH_REGULATOR_MODE_AUTO:	Auto mode in which the regulator hardware
 *				automatically switches between LPM and HPM based
 *				upon the real-time load current.  This mode is
 *				supported by HFSMPS, BOB, and PMIC4 FTSMPS type
 *				regulators.
 * %RPMH_REGULATOR_MODE_HPM:	High power mode in which the full rated current
 *				of the regulator is allowed.  This mode
 *				corresponds to PWM for SMPS and BOB type
 *				regulators.  This mode is supported by all types
 *				of regulators.
 */
#define RPMH_REGULATOR_MODE_PASS	0
#define RPMH_REGULATOR_MODE_RET		1
#define RPMH_REGULATOR_MODE_LPM		2
#define RPMH_REGULATOR_MODE_AUTO	3
#define RPMH_REGULATOR_MODE_HPM		4

#endif
