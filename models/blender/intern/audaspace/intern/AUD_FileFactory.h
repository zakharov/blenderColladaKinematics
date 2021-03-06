/*
 * $Id: AUD_FileFactory.h 31372 2010-08-16 11:41:07Z nexyon $
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

#ifndef AUD_FILEFACTORY
#define AUD_FILEFACTORY

#include "AUD_IFactory.h"
#include "AUD_Reference.h"
class AUD_Buffer;

#include <string>

/**
 * This factory tries to read a sound file via all available file readers.
 */
class AUD_FileFactory : public AUD_IFactory
{
private:
	/**
	 * The filename of the sound source file.
	 */
	std::string m_filename;

	/**
	 * The buffer to read from.
	 */
	AUD_Reference<AUD_Buffer> m_buffer;

	// hide copy constructor and operator=
	AUD_FileFactory(const AUD_FileFactory&);
	AUD_FileFactory& operator=(const AUD_FileFactory&);

public:
	/**
	 * Creates a new factory.
	 * \param filename The sound file path.
	 */
	AUD_FileFactory(std::string filename);

	/**
	 * Creates a new factory.
	 * \param buffer The buffer to read from.
	 * \param size The size of the buffer.
	 */
	AUD_FileFactory(const data_t* buffer, int size);

	virtual AUD_IReader* createReader() const;
};

#endif //AUD_FILEFACTORY
