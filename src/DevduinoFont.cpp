/** MIT License
*
* Copyright(c) 2017 DevDuino
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files(the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions :
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include "devduinoFont.h"


	const uint8_t DevduinoFont::glyphsBuffer[95][5] PROGMEM = {
		{ 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0xFA, 0x00, 0x00 },
		{ 0x00, 0xE0, 0x00, 0xE0, 0x00 },
		{ 0x2E, 0x38, 0xEE, 0x38, 0xE8 },
		{ 0x20, 0x54, 0xFE, 0x54, 0x08 },
		{ 0xC6, 0xC8, 0x10, 0x26, 0xC6 },
		{ 0x0C, 0xF2, 0xAA, 0xC4, 0x1A },
		{ 0x00, 0x00, 0xE0, 0x00, 0x00 },
		{ 0x00, 0x7C, 0x82, 0x00, 0x00 },
		{ 0x00, 0x00, 0x82, 0x7C, 0x00 },
		{ 0x00, 0xA0, 0x40, 0xA0, 0x00 },
		{ 0x10, 0x10, 0x7C, 0x10, 0x10 },
		{ 0x00, 0x02, 0x0C, 0x00, 0x00 },
		{ 0x00, 0x10, 0x10, 0x10, 0x00 },
		{ 0x00, 0x06, 0x06, 0x00, 0x00 },
		{ 0x00, 0x06, 0x38, 0xC0, 0x00 },
		{ 0x7C, 0x82, 0x82, 0x7C, 0x00 },
		{ 0x00, 0x42, 0xFE, 0x02, 0x00 },
		{ 0x46, 0x8A, 0x92, 0x62, 0x00 },
		{ 0x44, 0x82, 0x92, 0x7C, 0x00 },
		{ 0x18, 0x28, 0x48, 0xFE, 0x00 },
		{ 0xE4, 0xA2, 0xA2, 0x9C, 0x00 },
		{ 0x7C, 0x92, 0x92, 0x0C, 0x00 },
		{ 0x86, 0x88, 0xB0, 0xC0, 0x00 },
		{ 0x6C, 0x92, 0x92, 0x6C, 0x00 },
		{ 0x64, 0x92, 0x92, 0x7C, 0x00 },
		{ 0x00, 0x00, 0x44, 0x00, 0x00 },
		{ 0x00, 0x02, 0x2C, 0x00, 0x00 },
		{ 0x08, 0x14, 0x14, 0x22, 0x22 },
		{ 0x14, 0x14, 0x14, 0x14, 0x14 },
		{ 0x22, 0x22, 0x14, 0x14, 0x08 },
		{ 0x60, 0x8A, 0x90, 0x60, 0x00 },
		{ 0x7C, 0x92, 0xAA, 0x9A, 0x72 },
		{ 0x7E, 0x90, 0x90, 0x7E, 0x00 },
		{ 0xFE, 0x92, 0x92, 0x6C, 0x00 },
		{ 0x7C, 0x82, 0x82, 0x82, 0x00 },
		{ 0xFE, 0x82, 0x82, 0x7C, 0x00 },
		{ 0xFE, 0x92, 0x92, 0x82, 0x00 },
		{ 0xFE, 0x90, 0x90, 0x80, 0x00 },
		{ 0x7C, 0x82, 0x92, 0x9C, 0x00 },
		{ 0xFE, 0x10, 0x10, 0xFE, 0x00 },
		{ 0x00, 0x00, 0xFE, 0x00, 0x00 },
		{ 0x04, 0x02, 0x02, 0xFC, 0x00 },
		{ 0xFE, 0x10, 0x68, 0x86, 0x00 },
		{ 0xFE, 0x02, 0x02, 0x02, 0x00 },
		{ 0xFE, 0xC0, 0x20, 0xC0, 0xFE },
		{ 0xFE, 0xC0, 0x38, 0x06, 0xFE },
		{ 0xFE, 0x82, 0x82, 0xFE, 0x00 },
		{ 0xFE, 0x90, 0x90, 0x60, 0x00 },
		{ 0x7C, 0x82, 0x86, 0x7E, 0x00 },
		{ 0xFE, 0x90, 0x98, 0x66, 0x00 },
		{ 0x62, 0x92, 0x92, 0x8C, 0x00 },
		{ 0x80, 0x80, 0xFE, 0x80, 0x80 },
		{ 0xFC, 0x02, 0x02, 0xFC, 0x00 },
		{ 0xF0, 0x0C, 0x06, 0x0C, 0xF0 },
		{ 0xFE, 0x06, 0x08, 0x06, 0xFE },
		{ 0xC6, 0x28, 0x10, 0x28, 0xC6 },
		{ 0xE0, 0x10, 0x0E, 0x10, 0xE0 },
		{ 0x86, 0x8A, 0x92, 0xA2, 0xC2 },
		{ 0x00, 0xFE, 0x82, 0x00, 0x00 },
		{ 0x00, 0xC0, 0x38, 0x06, 0x00 },
		{ 0x00, 0x00, 0x82, 0xFE, 0x00 },
		{ 0x20, 0x40, 0x80, 0x40, 0x20 },
		{ 0x02, 0x02, 0x02, 0x02, 0x02 },
		{ 0x00, 0xC0, 0x20, 0x00, 0x00 },
		{ 0x04, 0x2A, 0x2A, 0x1E, 0x00 },
		{ 0xFE, 0x22, 0x22, 0x1C, 0x00 },
		{ 0x1C, 0x22, 0x22, 0x22, 0x00 },
		{ 0x1C, 0x22, 0x22, 0xFE, 0x00 },
		{ 0x1C, 0x2A, 0x2A, 0x10, 0x00 },
		{ 0x00, 0x3E, 0x48, 0x40, 0x00 },
		{ 0x10, 0x2A, 0x2A, 0x1C, 0x00 },
		{ 0xFE, 0x20, 0x20, 0x1E, 0x00 },
		{ 0x00, 0x00, 0x5E, 0x00, 0x00 },
		{ 0x00, 0x04, 0x02, 0x5C, 0x00 },
		{ 0x3E, 0x08, 0x14, 0x22, 0x00 },
		{ 0x00, 0x7C, 0x02, 0x02, 0x00 },
		{ 0x1E, 0x20, 0x1E, 0x20, 0x1E },
		{ 0x1E, 0x20, 0x20, 0x1E, 0x00 },
		{ 0x1C, 0x22, 0x22, 0x1C, 0x00 },
		{ 0x3E, 0x28, 0x28, 0x10, 0x00 },
		{ 0x10, 0x28, 0x28, 0x3E, 0x00 },
		{ 0x3E, 0x10, 0x20, 0x10, 0x00 },
		{ 0x12, 0x2A, 0x2A, 0x24, 0x00 },
		{ 0x7C, 0x22, 0x22, 0x02, 0x00 },
		{ 0x3C, 0x02, 0x02, 0x3C, 0x00 },
		{ 0x38, 0x04, 0x02, 0x04, 0x38 },
		{ 0x3C, 0x02, 0x3C, 0x02, 0x3C },
		{ 0x22, 0x14, 0x08, 0x14, 0x22 },
		{ 0x30, 0x08, 0x08, 0x3E, 0x00 },
		{ 0x26, 0x2A, 0x2A, 0x32, 0x00 },
		{ 0x00, 0x10, 0x6C, 0x82, 0x00 },
		{ 0x00, 0x00, 0xFE, 0x00, 0x00 },
		{ 0x00, 0x82, 0x6C, 0x10, 0x00 },
		{ 0x40, 0x80, 0x40, 0x20, 0x40 }
	};

	const uint8_t DevduinoFont::glyphsWidth[95] PROGMEM = {
		2, 1, 3, 5, 5, 5, 5, 1, 2, 2, 3, 5, 2, 3, 2, 3, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4, 1, 2, 5, 5, 5, 4, 5,
		4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 5, 5, 4, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5,
		2, 3, 2, 5, 5, 2,
		4, 4, 4, 4, 4, 3, 4, 4, 1, 3, 4, 3, 5, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5,	4, 4,
		3, 1, 3, 5
	};

	const uint8_t DevduinoFont::glyphsPosition[95] PROGMEM = {
		0, 2, 1, 0, 0, 0, 0, 2, 1, 2, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 1, 2, 0, 0, 1,
		0, 0, 0, 0, 0, 1, 0, 0, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	0, 0,
		1, 2, 1, 0
	};

	//------------------------------------------------------------------------//
	//---------------------------- Public methods ----------------------------//
	//------------------------------------------------------------------------//
	uint8_t DevduinoFont::getSize() {
		return 7;
	}

	uint8_t DevduinoFont::getGlyphWidth(uint8_t characterCode) {
		return pgm_read_byte(&glyphsWidth[characterCode - 32]);
	}

	uint8_t DevduinoFont::getGlyphHeight(uint8_t characterCode) {
		return 7;
	}

	const uint8_t* DevduinoFont::getGlyphPixels(uint8_t characterCode) {
		return (&glyphsBuffer[characterCode - 32][0]) + getGlyphPosition(characterCode);
	}

	int8_t DevduinoFont::getGlyphKerning(uint8_t characterCode, uint8_t previousCharacterCode) {
		return 0;
	}

	uint8_t DevduinoFont::getGlyphXAdvance(uint8_t characterCode) {
		return pgm_read_byte(&glyphsWidth[characterCode - 32]);
	}

	int8_t DevduinoFont::getGlyphXOffset(uint8_t characterCode) {
		return 0;
	}

	int8_t DevduinoFont::getGlyphYOffset(uint8_t characterCode) {
		return 0;
	}

	//------------------------------------------------------------------------//
	//---------------------------- Private methods ---------------------------//
	//------------------------------------------------------------------------//
	uint8_t DevduinoFont::getGlyphPosition(uint8_t characterCode) {
		return pgm_read_byte(&glyphsPosition[characterCode - 32]);
	}