/*
 * $Id: AUD_VolumeFactory.h 31372 2010-08-16 11:41:07Z nexyon $
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

#ifndef AUD_VOLUMEFACTORY
#define AUD_VOLUMEFACTORY

#include "AUD_EffectFactory.h"

/**
 * This factory changes the volume of another factory.
 * The set volume should be a value between 0.0 and 1.0, higher values at your
 * own risk!
 */
class AUD_VolumeFactory : public AUD_EffectFactory
{
private:
	/**
	 * The volume.
	 */
	const float m_volume;

	// hide copy constructor and operator=
	AUD_VolumeFactory(const AUD_VolumeFactory&);
	AUD_VolumeFactory& operator=(const AUD_VolumeFactory&);

public:
	/**
	 * Creates a new volume factory.
	 * \param factory The input factory.
	 * \param volume The desired volume.
	 */
	AUD_VolumeFactory(AUD_IFactory* factory, float volume);

	/**
	 * Returns the volume.
	 */
	float getVolume() const;

	virtual AUD_IReader* createReader() const;
};

#endif //AUD_VOLUMEFACTORY
