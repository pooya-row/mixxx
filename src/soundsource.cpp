/***************************************************************************
 soundsource.cpp  -  description
 -------------------
 begin                : Wed Feb 20 2002
 copyright            : (C) 2002 by Tue and Ken Haste Andersen
 email                :
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "soundsource.h"
#include "trackmetadata.h"

namespace Mixxx {

SoundSource::SoundSource(QString sFilename)
        : m_sFilename(sFilename), m_sType(m_sFilename.section(".", -1).toLower()), m_bitrate(0) {
}

SoundSource::SoundSource(QString sFilename, QString sType)
        : m_sFilename(sFilename), m_sType(sType), m_bitrate(0) {
}

SoundSource::~SoundSource() {
}

} //namespace Mixxx
