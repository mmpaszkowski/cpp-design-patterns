//
// Created by Mateusz Paszkowski on 08.04.2024.
//

#ifndef TARGET_H
#define TARGET_H

#include "Size.h"
#include "Visibility.h"
#include <iostream>

namespace dp
{
class Target
{
public:
    constexpr Target(Size size, Visibility visibility) noexcept;
    [[nodiscard]] constexpr Size                getSize() const noexcept;
    [[nodiscard]] constexpr Visibility          getVisibility() const noexcept;

    void                                        printStatus() const;
    constexpr void                              changeSize() noexcept;
    constexpr void                              changeVisibility() noexcept;

    [[nodiscard]] virtual constexpr std::string toString() const = 0;

private:
    Size       size_;
    Visibility visibility_;
};

constexpr Target::Target(Size size, Visibility visibility) noexcept : size_(size), visibility_(visibility) {}

constexpr Size       Target::getSize() const noexcept { return size_; }

constexpr Visibility Target::getVisibility() const noexcept { return visibility_; }

constexpr void       Target::changeSize() noexcept { size_ = size_ == Size::Normal ? Size::Small : Size::Normal; }

constexpr void Target::changeVisibility() noexcept
{
    visibility_ = visibility_ == Visibility::Visible ? Visibility::Invisible : Visibility::Visible;
}


} // namespace dp


#endif //TARGET_H
