/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright � 2012 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  and Mark Ortiz

  See README for complete attributions.
*/

#ifndef INCLUDE_G35_PROGRAMS_MEO_WHITES_H
#define INCLUDE_G35_PROGRAMS_MEO_WHITES_H

#include <MEOLightProgram.h>

class MEOWhites : public MEOLightProgram
{
public:
    MEOWhites(MEOG35& g35, uint8_t pattern);
    uint32_t Do();
	static color_t RGB(uint16_t sequence);
    static color_t CYM(uint16_t sequence);

private:
    uint8_t intensity_;
    uint8_t pattern_;
	uint8_t count_;
    uint16_t sequence_;
	uint16_t wait_;
};

#endif