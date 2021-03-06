//	Copyright (C) 2011 Michael McMaster <michael@codesrc.com>
//
//	This file is part of libzipper.
//
//	libzipper is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	libzipper is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with libzipper.  If not, see <http://www.gnu.org/licenses/>.

#include "zipper.hh"

#include <vector>

namespace zipper
{
	void deflate(
		const Reader& reader,
		const WriterPtr& writer,
		zsize_t& writeOffset,
		zsize_t& uncompressedSize,
		zsize_t& compressedSize,
		uint32_t& crc);

	void inflate(
		const ReaderPtr& reader,
		Writer& writer,
		zsize_t& readOffset,
		zsize_t readEnd,
		zsize_t& writeOffset,
		uint32_t& crc);
}

