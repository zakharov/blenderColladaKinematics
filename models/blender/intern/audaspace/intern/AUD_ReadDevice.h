/*
 * $Id: AUD_ReadDevice.h 31372 2010-08-16 11:41:07Z nexyon $
 *
 * ***** BEGIN LGPL LICENSE BLOCK *****
 *
 * Copyright 2009 Jörg Hermann Müller
 *
 * This file is part of AudaSpace.
 *
 * AudaSpace is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AudaSpace is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with AudaSpace.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ***** END LGPL LICENSE BLOCK *****
 */

#ifndef AUD_READDEVICE
#define AUD_READDEVICE

#include "AUD_SoftwareDevice.h"

/**
 * This device enables to let the user read raw data out of it.
 */
class AUD_ReadDevice : public AUD_SoftwareDevice
{
private:
	/**
	 * Whether the device currently.
	 */
	bool m_playing;

	// hide copy constructor and operator=
	AUD_ReadDevice(const AUD_ReadDevice&);
	AUD_ReadDevice& operator=(const AUD_ReadDevice&);

protected:
	virtual void playing(bool playing);

public:
	/**
	 * Creates a new read device.
	 * \param specs The wanted audio specification.
	 */
	AUD_ReadDevice(AUD_DeviceSpecs specs);

	/**
	 * Closes the device.
	 */
	virtual ~AUD_ReadDevice();

	/**
	 * Reads the next bytes into the supplied buffer.
	 * \param buffer The target buffer.
	 * \param length The length in samples to be filled.
	 * \return True if the reading succeeded, false if there are no sounds
	 *         played back currently, in that case the buffer is filled with
	 *         silence.
	 */
	bool read(data_t* buffer, int length);
};

#endif //AUD_READDEVICE
