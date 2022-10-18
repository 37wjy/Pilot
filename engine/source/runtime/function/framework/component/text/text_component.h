#pragma once

#include "runtime/function/framework/component/component.h"


namespace Piccolo
{
    REFLECTION_TYPE(TextComponent)
    CLASS(TextComponent : public Component, WhiteListFields)
    {
        REFLECTION_BODY(TextComponent)
    public:
        TextComponent() = default;
        ~TextComponent() override;

        void postLoadResource(std::weak_ptr<GObject> parent_object) override;
        void setText(const std::string& text);
        void tick(float delta_time) override;

    protected:
        META(Enable)

        std::string _text;
    };
} // namespace Piccolo