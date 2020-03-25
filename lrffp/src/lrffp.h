/*
 * Copyright (c) 2019, RF Networks Ltd.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code are not permitted.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of RF Networks Ltd. nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SRC_LRFFP_H_
#define SRC_LRFFP_H_

#define PACKAGE_STRING "lrffp 1.00.05"

#define VERSION_MSG \
    PACKAGE_STRING "\n" \
    "Copyright (C) 2017-2020 RF Networks Ltd.\n" \
    "All rights reserved.\n\n"

#define HELP_MSG \
    "Flash Programmer for Telit xE-50 devices\n" \
    "Usage: lrffp <stream name> <serial port> <options>\n" \
    "\n" \
    "--verbose: enable verbose output\n" \
    "--version, -v: print version\n" \
    "--device, -d: choose device\n" \
    "\t 1 - RFN-TagReceiver\n" \
	"\t 2 - Telit-Mesh\n" \
    "\t 3 - Telit-Star\n" \
	"\t 4 - RFN-Mesh\n" \
	"--speed, -s: choose serial port speed\n" \
    "\t 1 - 19200\n" \
    "\t 2 - 57600\n" \
    "\t 3 - 115200\n" \
    "--enterbootloader, -b: enter device to bootloader mode\n" \
	"--gpio, -g: RS485 direction GPIO\n"

#define DEVICE_ALL_SELECTION					'0'
#define DEVICE_RFN_TAG_RECEIVER_SELECTION       '1'
#define DEVICE_TELIT_MESH_SELECTION             '2'
#define DEVICE_TELIT_STAR_SELECTION             '3'
#define DEVICE_RFN_MESH_SELECTION		        '4'

#define DEVICE_ALL								0
#define DEVICE_RFN_TAG_RECEIVER					1
#define DEVICE_TELIT_MESH						2
#define DEVICE_TELIT_STAR						3
#define DEVICE_RFN_MESH							4

#define DEVICE_SPEED_SELECTION_19200			'1'
#define DEVICE_SPEED_SELECTION_57600			'2'
#define DEVICE_SPEED_SELECTION_115200			'3'

#endif /* SRC_LRFFP_H_ */
