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

#ifndef SRC_UPLOADER_H_
#define SRC_UPLOADER_H_

#include <fstream>
#include "GPIO.h"

#define RTS_GPIO				19
#define BYTES_IN_BUFFER_DELAY	2000

using namespace std;

class Device;

class Uploader {
	friend class Device;

protected:
	GPIO *rtsdir;
	GPIO *rs485dir;

	int err;
	uint8_t data[0xFFFF];
	unsigned int max_address;

	bool sendFlashCommand(Device* device, uint8_t *data, ssize_t size);
	bool isInBootloader(Device* device);
	bool enterFlashingMode(Device* device);
	bool exitFlashingMode(Device* device);
	bool eraseMemory(Device* device);
	bool sendFirmwareChunk(Device* device, ssize_t offset);
	bool compareCRC(Device* device, unsigned int pointer);
public:
	Uploader();
	virtual ~Uploader();

	virtual bool initializeStream(ifstream &stream);
	virtual bool uploadStream(Device* device);
};

#endif /* SRC_UPLOADER_H_ */