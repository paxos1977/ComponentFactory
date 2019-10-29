#pragma once
#include <utility>

namespace component_factory {

    template<typename Tag, typename Func>
    using Component = std::pair<Tag, Func>;

    template<typename Tag, typename Func>
    constexpr Component<Tag, Func> make_component(Tag&& tag, Func&& func)
    {
        return std::make_tuple(std::move(tag), std::move(func));
    }
}
