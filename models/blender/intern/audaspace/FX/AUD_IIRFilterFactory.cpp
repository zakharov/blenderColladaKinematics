/*
 * $Id: AUD_IIRFilterFactory.cpp 31372 2010-08-16 11:41:07Z nexyon $
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

#include "AUD_IIRFilterFactory.h"
#include "AUD_IIRFilterReader.h"

AUD_IIRFilterFactory::AUD_IIRFilterFactory(AUD_IFactory* factory,
										   std::vector<float> b,
										   std::vector<float> a) :
		AUD_EffectFactory(factory), m_a(a), m_b(b)
{
}

AUD_IReader* AUD_IIRFilterFactory::createReader() const
{
	return new AUD_IIRFilterReader(getReader(), m_b, m_a);
}
