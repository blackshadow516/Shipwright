#include "Text.h"

namespace LUS {
void* Text::GetPointer() {
    return messages.data();
}

size_t Text::GetPointerSize() {
	return messages.size() * sizeof(MessageEntry);
}
} // namespace LUS
