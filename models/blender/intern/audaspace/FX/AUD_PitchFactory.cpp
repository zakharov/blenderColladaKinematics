/*
 * $Id: AUD_PitchFactory.cpp 31372 2010-08-16 11:41:07Z nexyon $
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

#include "AUD_PitchFactory.h"
#include "AUD_PitchReader.h"
#include "AUD_Space.h"

AUD_PitchFactory::AUD_PitchFactory(AUD_IFactory* factory, float pitch) :
		AUD_EffectFactory(factory),
		m_pitch(pitch)
{
}

AUD_IReader* AUD_PitchFactory::createReader() const
{
	return new AUD_PitchReader(getReader(), m_pitch);
}
