#include "runtime/core/base/macro.h"
#include "runtime/function/framework/component/transform/transform_component.h"

#include "runtime/engine.h"

namespace Piccolo
{

    void TransformComponent::postLoadResource(std::weak_ptr<GObject> parent_gobject)
    {
        m_is_dirty            = true;
    }


    void TextComponent::setText(const std::string text)
    {
        m_is_dirty = true;
    }

    void TextComponent::tick(float delta_time)
    {
        if (m_is_dirty)
        {
            // update transform component, dirty flag will be reset in mesh component

        }

        if (g_is_editor_mode)
        {

        }
    }
    
} // namespace Piccolo
