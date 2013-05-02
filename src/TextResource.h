#pragma once

#include "Types.h"
#include "Resource.h"

namespace crown
{

class ResourceArchive;
class Allocator;

class TextResource
{
public:

	static void*		load(Allocator& allocator, ResourceArchive& archive, ResourceId id);
	static void			unload(Allocator& allocator, void* resource);

	uint32_t			length;
	char*				data;
};

} // namespace crown
