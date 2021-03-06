/*
 * $Id: AUD_FileFactory.cpp 31382 2010-08-16 15:42:29Z nexyon $
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

#ifdef WITH_FFMPEG
// needed for INT64_C
#ifndef __STDC_CONSTANT_MACROS
#define __STDC_CONSTANT_MACROS
#endif
#include "AUD_FFMPEGReader.h"
#endif

#include "AUD_FileFactory.h"
#include "AUD_Buffer.h"

#include <cstring>

#ifdef WITH_SNDFILE
#include "AUD_SndFileReader.h"
#endif

AUD_FileFactory::AUD_FileFactory(std::string filename) :
	m_filename(filename)
{
}

AUD_FileFactory::AUD_FileFactory(const data_t* buffer, int size) :
	m_buffer(new AUD_Buffer(size))
{
	memcpy(m_buffer.get()->getBuffer(), buffer, size);
}

static const char* read_error = "AUD_FileFactory: File couldn't be read.";

AUD_IReader* AUD_FileFactory::createReader() const
{
#ifdef WITH_SNDFILE
	try
	{
		if(m_buffer.get())
			return new AUD_SndFileReader(m_buffer);
		else
			return new AUD_SndFileReader(m_filename);
	}
	catch(AUD_Exception&) {}
#endif

#ifdef WITH_FFMPEG
	try
	{
		if(m_buffer.get())
			return new AUD_FFMPEGReader(m_buffer);
		else
			return new AUD_FFMPEGReader(m_filename);
	}
	catch(AUD_Exception&) {}
#endif

	AUD_THROW(AUD_ERROR_FILE, read_error);
}
