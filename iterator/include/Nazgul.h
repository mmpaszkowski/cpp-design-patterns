//
// Created by noname on 4/6/24.
//

#ifndef NAZGUL_H
#define NAZGUL_H

#include "NazgulName.h"
#include <map>
#include <memory>
#include <vector>
#include <optional>

namespace dp {
    class Nazgul {
        class Iterator {
        public:
            using value_type = Nazgul;
            using reference = Nazgul &;
            using pointer = Nazgul *;

            using iterator_category = std::map<NazgulName, std::unique_ptr<Nazgul>>::iterator::iterator_category;
            using difference_type = ptrdiff_t;

            using self = Iterator;

        public:
            std::pair<const NazgulName &, Nazgul &> &operator*() noexcept;

            std::pair<const NazgulName &, Nazgul &> *operator->() noexcept;

            self &operator++() noexcept;

            self operator++(int) noexcept;

            self &operator--() noexcept;

            self operator--(int) noexcept;

            friend bool operator==(const self &x, const self &y) noexcept { return x.nazgul_node == y.nazgul_node; }

            friend bool operator!=(const self &x, const self &y) noexcept { return x.nazgul_node != y.nazgul_node; }

        private:
            explicit Iterator(std::map<NazgulName, std::unique_ptr<Nazgul>>::iterator node) noexcept;

        private:
            std::shared_ptr<std::pair<const NazgulName &, Nazgul &>> current_node;
            std::map<NazgulName, std::unique_ptr<Nazgul>>::iterator nazgul_node;
            friend Nazgul;
        };

    public:
        [[nodiscard]] static const Nazgul &getInstance(NazgulName name);

        [[nodiscard]] NazgulName getName() const noexcept;

        [[nodiscard]] static Iterator begin();

        [[nodiscard]] static Iterator end();

    private:
        constexpr explicit Nazgul(NazgulName name) noexcept;

        static void init();


    private:
        NazgulName name_;
        static std::map<NazgulName, std::unique_ptr<Nazgul>> nazguls_;
    };


} // namespace dp

#endif //NAZGUL_H
