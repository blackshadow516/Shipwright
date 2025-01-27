#pragma once

#include <cstdint>
#include <vector>
#include <memory>
#include <string>
#include "Resource.h"
#include "soh/resource/type/scenecommand/SceneCommand.h"
#include "soh/resource/type/CollisionHeader.h"
// #include <libultraship/libultra/types.h>

namespace LUS {
class SetCollisionHeader : public SceneCommand {
  public:
    using SceneCommand::SceneCommand;

    void* GetPointer();
    size_t GetPointerSize();

    std::string fileName;

    std::shared_ptr<CollisionHeader> collisionHeader;
};
}; // namespace LUS
