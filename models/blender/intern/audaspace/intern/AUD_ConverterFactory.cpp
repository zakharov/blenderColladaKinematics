/*
 * $Id: AUD_ConverterFactory.cpp 31372 2010-08-16 11:41:07Z nexyon $
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

#include "AUD_ConverterFactory.h"
#include "AUD_ConverterReader.h"

AUD_ConverterFactory::AUD_ConverterFactory(AUD_IFactory* factory,
										   AUD_DeviceSpecs specs) :
		AUD_MixerFactory(factory, specs)
{
}

AUD_IReader* AUD_ConverterFactory::createReader() const
{
	AUD_IReader* reader = getReader();

	if(m_specs.format != AUD_FORMAT_FLOAT32)
		reader = new AUD_ConverterReader(reader, m_specs);

	return reader;
}
