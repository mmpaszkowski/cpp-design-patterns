//
// Created by noname on 02.12.2024.
//

#ifndef DRAWABLE_SHAPE_H
#define DRAWABLE_SHAPE_H

#include <memory>

namespace dp
{
class DrawableShape
{
    struct DrawableShapeConcept
    {
        virtual ~DrawableShapeConcept()                             = default;
        virtual void                                  draw() const  = 0;
        virtual std::unique_ptr<DrawableShapeConcept> clone() const = 0;
    };


    template <typename T, typename DrawStrategy>
    struct DrawableShapeModel : public DrawableShapeConcept
    {
        DrawableShapeModel(T&& shape, DrawStrategy&& drawer) noexcept
            : shape{std::forward<T>(shape)}, drawer{std::forward<DrawStrategy>(drawer)} {};

        void                                  draw() const override { drawer.draw(shape); }

        std::unique_ptr<DrawableShapeConcept> clone() const { return std::make_unique<DrawableShapeModel>(*this); }

    private:
        T            shape;
        DrawStrategy drawer;
    };

public:
    template <typename T, typename DrawStrategy>
    DrawableShape(T&& shape, DrawStrategy&& draw_strategy)
        : pimpl{std::make_unique<DrawableShapeModel<T, DrawStrategy>>(std::forward<T>(shape),
                                                                      std::forward<DrawStrategy>(draw_strategy))}
    {
    }

    DrawableShape(const DrawableShape& other) : pimpl(other.pimpl->clone()) {}
    DrawableShape(DrawableShape&& other) noexcept = default;

    DrawableShape& operator=(const DrawableShape& other)
    {
        // Copy-and-swap idiom
        DrawableShape tmp(other);
        std::swap(pimpl, tmp.pimpl);
        return *this;
    }

    DrawableShape& operator=(DrawableShape&& other) noexcept = default;

    void           draw() const { this->pimpl->draw(); }

private:
    std::unique_ptr<DrawableShapeConcept> pimpl;
};
} // namespace dp

#endif //DRAWABLE_SHAPE_H
